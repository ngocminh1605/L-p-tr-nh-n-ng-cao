void swap(int* a, int* b){
    int * tg;
    tg=new int;
    *tg= *a;
    *a=*b;
    *b=*tg;
}
