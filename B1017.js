let num = '123456789050987654321';
let arr = (num).split('')
arr = arr.map(v => Number(v))
// let lastNum = arr[arr.length - 1] // 个位的数字
let lastNum = 7 // 个位的数字
let curNum = arr[0] // 一直余出来的数字和后一项的数字组合组合
let res = '' // 结果
let curIndex = 0
// console.log(typeof lastNum)
function getResult(){
    for(let index = 0; index<arr.length; index++){
        if(!arr[curIndex] && arr[curIndex] != 0 ){
            console.log(res)
            return
        }
        if(lastNum <= curNum){
            // 直接进行除法: 没有余数 将下一项赋值给 curNum
            //             有余数 余数+下一项赋值给 curNum
            if(curNum % lastNum === 0){
                res += curNum / lastNum
                curNum = arr[curIndex + 1]
                curIndex = curIndex + 1
            }else{
                res += ((curNum / lastNum) + '').slice(0,1)
                curNum = Number('' + (curNum % lastNum) + arr[curIndex + 1])
                curIndex = curIndex + 1
            }
        }else{
            curNum = Number(''+curNum + arr[curIndex + 1])
            curIndex = curIndex + 1
            if(curNum % lastNum === 0){
                res += (curNum % lastNum)
                curNum = arr[curIndex + 2]
                curIndex = curIndex + 2
            }else{
                res += ((curNum / lastNum) + '').slice(0,1)
                curNum = Number('' + (curNum % lastNum) +  arr[curIndex + 1])
                curIndex = curIndex + 1
            }
        }

        
    }
}
getResult()