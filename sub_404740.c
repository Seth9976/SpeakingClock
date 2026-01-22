// 函数: sub_404740
// 地址: 0x404740
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t* eax = data_4af7c8

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
