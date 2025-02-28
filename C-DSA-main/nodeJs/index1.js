// var a=90;
// console.log(a);
// const app =require('./app');
// console.log(__dirname);
// console.log(__filename);

// console.log(document.querySeletor);
// const xyz = require('./app');
// console.log(xyz);
 const fs = require('fs');
// fs.writeFileSync("hello2.txt","like and subscribe");
// console.log("->>",__filename);
// console.log("->>",__dirname);
// const fs= require('fs').writeFileSync;
// fs("abc.txt","abc");

 const http = require('http');

//  http.createServer((req,resp) => {
//         resp.setHeader('content- Type' , 'text/plain');
//     resp.write("<h1>hello this is AG</h1>");
//      resp.end();
//  }).listen(3000);

// // console.log("Package.json");


// const server = http.createServer((req,res) => {
//     console.log(req);
//     fs.readFile('./index.html', (err, data) => {
//         if (err) {
//             console.log(err);
//             res.end();
//         }else {
            
//             res.end(data);
//         }
//     })
// });

// server.listen(3000,'localhost', () => {
//     console.log('listening for request on port 3000')
// });

// REQuEST AAND RESponse


// const server = http.createServer((req,res) => {
//     console.log(req.url, req.method);

//     res.setHeader('Content-Type', 'text/html');

//     let path = './';
//     switch(req.url){
//         case '/':
//             path += 'index.html';
//             res.statusCode = 200;
//             break;
//         case '/about':
//             path += 'about.html';
//             res.statusCode = 200;
//             break;
//         default:
//             // path += '404.html';
//             res.statusCode = 301;
//             res.setHeader('Location', '/about');
           
//             res.end();
            
//             break;
//     }


// //send an html file
// fs.readFile(path, (err, data) => {
//     if (err){
//         console.log(err);
//         res.end();
//     }
//     else{
//        // res.write(data)
//         res.end(data);
//     }
//     }
//  )
// }).listen(3000);

// console.log('hello nodemo')

//EXPRESS JS
const express = require('express');

const app = express();

app.listen(3000);

app.get('/', (req,res) => {
   res.sendFile('./index.html',{root:__dirname});
});

app.get('/about', (req,res) => {
    res.sendFile('./about.html', {root:__dirname});
});

app.get('/about-us', (req,res) => {
    res.redirect('/about');
})

app.use((req,res) => {
    res.sendFile('./404.html', {root:__dirname});
});

