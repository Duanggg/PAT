
var path = require("path");
var fs = require("fs");
 
var pathName = "./";
fs.readdir(pathName, function(err, files){
    var dirs = [];
    files.forEach(v => {
        if(/.*\.cpp/.test(v)){
            console.log(v)
        }
    });
    
    (function iterator(i){
      if(i == files.length) {
        return ;
      }
      let fileName = path.join(pathName, files[i]);
      fs.stat(fileName, function(err, data){  
        if(/.*\.cpp/.test(fileName)){
          console.log('------');
          console.log(path.join(pathName, files[i]));
          console.log('-------');
          var content = fs.readFileSync(path.join(pathName, files[i]), 'utf-8');
          console.log(content);
          return;          
        }
        if(data.isFile()){               
            dirs.push(files[i]);
        }
        iterator(i+1);
       });   
    })(0);
});