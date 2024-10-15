void stackType<Type>::printStack(){
    for(int i = 0; i < stackTop; i++){
        cout << list[i] << " " << endl;


    }

}

void stackType<Type>::secondFromBotton(){
    return list[1]

}

void stackType<Type>::secondFromTop(){
    return list[stackTop-2]

}

void stackType<Type>::sumTheEnds(){
    sum = 0;
    sum += list[0];
    sum += list[stacktop-1];
    s.push(sum);



}