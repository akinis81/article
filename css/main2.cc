body {
    position: relative;
    height: 100vh;
    Font-size: 13px;
    font-family: 'Manrope', sans-serif;
}

main{
    display: grid;
    grid-template-columns: 300px 400px;
    position: absolute;
    top:50%;
    left:50%;
    transform: translate(-50%,-50%);
}
    .leftas{
     
    }
        .drawers{
            width: 100%; 
            height: 300px;
            object-fit: cover;
            object-position: left;
        }
    .rightas{
        display: grid;
        width: 100%;
        height: 300px;
        padding-left: 15px;
        padding-right: 15px;
        grid-template-columns: 100%;
        grid-template-rows: minmax(100px, auto),minmax(100px, auto),minmax(100px, auto);
        /* border: 1px solid red; */
        
    }
        h1{
            color:hsl(217, 19%, 35%);
            font-weight: 700;
            font-size: 28px;
        }
            
        
        p{
            font-size: 16px;
            color:hsl(214, 17%, 51%);
        }
        
        .footer{
            display: grid;
            grid-template-columns: 60px 240px 1fr;
            
                
            }
            .mishele{
                margin-left: 10px;
                width: 40px;
                object-position: center;
                object-fit: contain;
                border-radius: 45px;
                
            }
            .name-date{}
            .name{
                display: inline-block;
                width: 100%;            
                color: hsl(217, 19%, 35%);
                font-weight: 700;
                
            }
            .date{
                color: hsl(212, 23%, 69%);
            }
            .share{
     

            }
            .share-icon{

                padding: 10px;
                margin-right: 115px;
                background-color:hsl(180deg 7% 95%);
                border-radius: 50%;
                /* background-color: red; */
                cursor: pointer;
            }

            .share-icon:hover{
                padding: 10px;
                background-color:hsl(217, 19%, 35%);
                border-radius: 45px;
            }
            .share-icon:active{
                transform: translate(2px);
            }
    
            .show {
                background-color: #444F65;
                justify-content: center;
                align-items: center;
                display: flex;
                padding: 30px 20px;
                height: 10px;
                border-radius: 13px;
                margin-top: -110px;
                margin-left: -127px;
            }
            .hide{
                display: none;
                
            }
            .show:after{
                content: '';
                position: relative;
                left: -38%;
                bottom: -49px;
                border: 20px solid transparent;
                border-top-color:#444F65;

            }

            .show p{
                text-transform: uppercase;
                letter-spacing: 5px;
                color: white;
                opacity: 0.4;
            }
                ul{
                    display: flex;
                    list-style-type: none;
                    margin-left: 15px;
                    /* background-color: tomato; */
                }
                li{
                    padding: 5px 5px;
                    margin: 3px 3px;
                    cursor: pointer;
                }
