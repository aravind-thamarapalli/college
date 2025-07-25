var board;
var score = 0;
var rows = 4;
var columns = 4;

window.onload = function(){
    setgame();
}

function setgame(){
    //board = [
    //    [0,0,0,0]
    //    [0,0,0,0]
    //    [0,0,0,0]
    //    [0,0,0,0]
    //]
    board = [
        [2,2,2,2]
        [2,2,4,4]
        [4,4,4,4]
        [8,8,8,8]
    ]

    for (let r = 0;r < rows; r++){
        for (let c = 0;c < columns; c++){
            let tile = document.createElement("div");
            tile.id = r.toString() + "-" + c.toString();
            let num = board[r][c];
            updateTile(tile, num);
        }
    }
}

function updateTile(tile,num){
    tile.innerText = "";
    tile.classList.value = "";
    if(num > 0){
        tile.innerText = num;
        if(num <= 4096) {
            tile.classList.add("x"+num.toString());
        }else{
            tile.classList.add("x.8192");
        }
    }
}