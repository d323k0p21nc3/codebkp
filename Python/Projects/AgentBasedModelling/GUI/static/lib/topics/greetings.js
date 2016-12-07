/**
 * Created by Prince on 11/23/2016.
 */

function greet() {
        postAsk("ask", "greetings", "how_you", JSONinputs.greetings[0].how_you);
        setTimeout(function (){
            document.getElementById("chat_ui").innerHTML +=
                     "<li>"
                    +"<img src='/static/assets/images/ai_talia.jpg' style='width: 60px; height: 60px'>"
                    +"<div class='message'>"
                        +"<span style='font-weight: bold'>Talia</span><br>"
                        +"<span class='txt'>"+JSONinputs.greetings[0].how_you+"</span>"
                    +"</div>"
                    +"</li>";
            scroll_();
        }, 2000);
}
