// 函数: sub_4035e8
// 地址: 0x4035e8
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t* eax = data_414634

if (eax != 0)
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* i = fsbase->NtTib.ExceptionList
    
    if (eax == i)
        int32_t eax_1 = *eax
        fsbase->NtTib.ExceptionList = eax_1
        return eax_1
    
    for (; i != 0xffffffff; i = i->Next)
        if (i->Next == eax)
            eax = *eax
            i->Next = eax
            break

return eax
