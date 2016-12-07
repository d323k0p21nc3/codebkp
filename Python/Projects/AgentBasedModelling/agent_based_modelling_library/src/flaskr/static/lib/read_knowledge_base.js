/**
 * Created by Prince on 11/23/2016.
 */

function postJSON(url, file, action){

    var objectJSON = {"file": file};
    var post_response = "";

     $.ajax({
            url: url,
            data: objectJSON,
            type: action,
            success: function(response) {
                 post_response = JSON.parse(response);
                JSONinputs = post_response.json_inputs;
                alert("Now Calling Talia");
                _init_();
                console.log(JSON.stringify(post_response));
            },
            error: function(error) {
                console.log(error);
            }
        });
}
