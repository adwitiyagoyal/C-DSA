// const express = require('express');
// const app = express();

// app.set("view engine", "ejs");
// app.use(express.static('./public')); 

// app.get("/", function(req, res){
//     res.render("index",{Age:12});
// });


// app.listen(4000);

const express = require('express');
const app = express();

app.set("view engine", 'ejs');
app.use(express.static('./public'));

app.get('/', function(req, res){
    res.send("hello world");
})

app.listen(4000);