
function postAsk(url, topic, key, ask){

    var objectJSON = {"topic": topic, "key": key, "ask": ask};

     $.ajax({
            url: url,
            data: objectJSON,
            type: 'post',
            success: function(response) {
                set_output(response);

                /**
                 * Topic Introduction
                 */
                if(topic_introduction_done){
                    document.getElementById("msg_init").innerHTML = "Introduction";
                    if(name_done){_name(); name_done = 0; desc_self_done = 1; return;}
                    if(desc_self_done){desc_self(); desc_self_done = 0; purpose_self_done = 1; return;}
                    if(purpose_self_done){purpose_self(); purpose_self_done = 0;}

                    if(name_done==0 && desc_self_done==0 && purpose_self_done==0)
                    {topic_introduction_done = 0; topic_passion_diagnosis_done = 1;}
                }

                /**
                 * Topic Passion Diagnosis
                 */
                if(topic_passion_diagnosis_done){
                    document.getElementById("msg_init").innerHTML = "Passion Diagnosis";
                    if(see_what_done){see_what(); see_what_done=0; affirm_symptoms_done=1; return;}
                    if(affirm_symptoms_done){affirm_symptoms(); affirm_symptoms_done=0; disease_period_done=1; return;}
                    if(disease_period_done){disease_period(); disease_period_done=0; final_diagnosis_done=1; return;}
                    if(final_diagnosis_done){final_diagnosis(); final_diagnosis_done=0; return;}

                    if(see_what_done==0 && affirm_symptoms_done==0 && disease_period_done==0 && final_diagnosis_done==0)
                    {topic_passion_diagnosis_done = 0; topic_disease_containment_done = 1;}
                }

                /**
                 * Topic Disease Containment
                 */
                if(topic_disease_containment_done){
                    document.getElementById("msg_init").innerHTML = "Disease Containment";
                    if(relief_done){relief(); relief_done=0; maintenance_1_done=1; return;}
                    if(maintenance_1_done){maintenance_1(); maintenance_1_done=0; maintenance_2_done=1; return;}
                    if(maintenance_2_done){maintenance_2(); maintenance_2_done=0; maintenance_3_done=1; return;}
                    if(maintenance_3_done){maintenance_3(); maintenance_3_done=0; complement_done=1; return;}
                    if(complement_done){complement(); complement_done=0}

                    if(relief_done==0 && maintenance_1_done==0 && maintenance_2_done==0 && maintenance_3_done==0 && complement_done==0)
                    {topic_disease_containment_done = 0; topic_preventive_measures_done = 1;}
                }

                /**
                 * Topic Preventive Measures
                 */
                if(topic_preventive_measures_done){
                    document.getElementById("msg_init").innerHTML = "Preventive Measures";
                    if(establish_base_done){establish_base(); establish_base_done=0; preventive_1_done=1; return;}
                    if(preventive_1_done){preventive_1(); preventive_1_done=0; preventive_2_done=1; return;}
                    if(preventive_2_done){preventive_2(); preventive_2_done=0; preventive_3_done=1; return;}
                    if(preventive_3_done){preventive_3(); preventive_3_done=0}

                    if(establish_base_done==0 && preventive_1_done==0 && preventive_2_done==0 && preventive_3_done==0)
                    {topic_preventive_measures_done = 0; topic_bye_done = 1;}
                }

                /**
                 * Topic Bye
                 */
                if(topic_bye_done){
                    document.getElementById("msg_init").innerHTML = "";
                    if(finalizing_done){finalizing(); finalizing_done=0; bye_done=1; return;}
                    if(bye_done){bye(); bye_done=0;}

                    if(finalizing_done==0 && bye_done==0)
                    {topic_bye_done = 0;}
                }

            },
            error: function(error) {
                console.log(error);
            }
        });
}

function _init_() {

    document.getElementById("msg_init").innerHTML = "Greeting";

    postAsk("ask", "greetings", "good_morning", JSONinputs.greetings[0].good_morning);

    setTimeout(function (){
    document.getElementById("chat_ui").innerHTML +=
         "<li>"
        +"<img src='/static/assets/images/ai_talia.jpg' style='width: 60px; height: 60px'>"
        +"<div class='message'>"
            +"<span style='font-weight: bold'>Talia</span><br>"
            +"<span class='txt'>"+JSONinputs.greetings[0].good_morning+"</span>"
        +"</div>"
        +"</li>";
    }, 2000);
}


function set_input(question){
    document.getElementById("chat_ui").innerHTML +=
         "<li>"
         +"<img src='/static/assets/images/ai_talia.jpg' style='width: 60px; height: 60px'>"
         +"<div class='message'>"
             +"<span style='font-weight: bold'>Talia</span><br>"
             +"<span class='txt'>"+question+"</span>"
         +"</div>"
         +"</li>";

    scroll_();
}


function set_output(response) {
    document.getElementById("chat_ui").innerHTML += "<li>"
        +"<img src='/static/assets/images/ai_donatello.jpg' style='width: 60px; height: 60px'>"
        +"<div class='message'>"
            +"<span style='font-weight: bold'>Isaac</span><br>"
            +"<span class='txt'>"+response+"</span>"
        +"</div>"
        +"</li>";

    scroll_();
}

function scroll_() {
    jQuery(document).ready(function(){
    var $t = $('div#content');
    $t.animate({"scrollTop": $('div#content')[0].scrollHeight}, "slow");
});
}
