
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
        console.log(dirs);
        return ;
      }
      fs.stat(path.join(pathName, files[i]), function(err, data){     
        if(data.isFile()){               
            dirs.push(files[i]);
        }
        iterator(i+1);
       });   
    })(0);
});