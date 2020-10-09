
function clickas(){
    const show = document.querySelector('.show');
    const shareiconoutside = document.querySelector('.share-icon-outside');
    shareiconoutside.addEventListener('click', () => {
        show.closest('.show').classList.toggle('hide');
        
    });
    
    const shareiconinside = document.querySelector('.share-icon-inside');
    shareiconinside.addEventListener('click', () => {
        show.closest('.show').classList.toggle('hide');
    console.log(shareiconinside);
});
}


clickas()
