


nodetype *current
nodetype *next

current = head
next = current->link


while (next != nullptr){
    next = next->link
    current = current->link

}

if(head->info == current->info){
    return true

}
else{
    return false
}
