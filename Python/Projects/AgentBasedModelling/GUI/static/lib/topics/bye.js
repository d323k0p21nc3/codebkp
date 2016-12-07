/**
 * Created by Prince on 12/5/2016.
 */

function finalizing() {
        postAsk("ask", "bye", "finalizing", JSONinputs.bye[0].finalizing);

        setTimeout(function (){
         set_input(JSONinputs.bye[0].finalizing);
        }, 85000);

}

function bye() {
        postAsk("ask", "bye", "bye", JSONinputs.bye[0].bye);

        setTimeout(function (){
         set_input(JSONinputs.bye[0].bye);
        }, 70000);

}