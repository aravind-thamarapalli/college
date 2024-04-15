let firstcard  =10
let secondcard = 4
let messageEl = document.getElementById("messageEl")
let sumEL = document.getElementById("sumEl")
let cards =[firstcard,secondcard]
let sum = firstcard + secondcard
let cardEl = document.getElementById("cardsEl")
let message=""

function startgame(){
    rendergame()
}

function rendergame(){
    
    cardEl.textContent="cards:"+" "+cards[0] +" "+cards[1]

    sumEL.textContent="Sum:"+" "+ sum

    if(sum>21){
        message = "You are out!"
    }
    else if(sum === 21){
        message = "You get Black Jack!!"
    }
    else {
        message = "Want to add new card??"
    }

    messageEl.textContent=message
}

function newcard(){
    let card = 7
    sum+=card
    rendergame()
}