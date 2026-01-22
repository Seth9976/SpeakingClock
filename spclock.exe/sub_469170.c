// 函数: sub_469170
// 地址: 0x469170
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD* var_8 = arg3
var_8 = arg1
struct _EXCEPTION_REGISTRATION_RECORD* eax = var_8

if (eax->__offset(0x68).b != 0)
    return eax

var_8->__offset(0x68).b = 1
int32_t __saved_ebp
int32_t* var_18 = &__saved_ebp
int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg2.b != var_8->__offset(0x69).b)
    int32_t edi_2 = *(var_8->__offset(0x50).d + 8) - 1
    
    if (edi_2 s>= 0)
        int32_t i_2 = edi_2 + 1
        int32_t esi_1 = 0
        int32_t i
        
        do
            int32_t* eax_8 = *(*(var_8->__offset(0x50).d + 4) + (esi_1 << 2))
            sub_403e18(eax_8, 0x468820)
            
            if (eax_8 != 0)
                (*(*eax_8 + 0x50))()
            
            esi_1 += 1
            i = i_2
            i_2 -= 1
        while (i != 1)
    
    var_8->__offset(0x69).b = arg2.b
    
    if (var_8->__offset(0x6c).d s> 0 && var_8->__offset(0x69).b != 0)
        int32_t edi_4 = sub_468c08(var_8->__offset(0x5c).d) - 1
        
        if (edi_4 s>= 0)
            int32_t i_3 = edi_4 + 1
            int32_t esi_2 = 0
            int32_t i_1
            
            do
                int32_t* eax_17 = sub_468bf4(var_8->__offset(0x5c).d, esi_2)
                
                if (eax_17 != var_8 && sub_403df4(eax_17, &data_468718) != 0
                        && eax_17[0x1b] == var_8->__offset(0x6c).d)
                    sub_469170()
                
                esi_2 += 1
                i_1 = i_3
                i_3 -= 1
            while (i_1 != 1)
    
    var_8->Next->__offset(0x30).d()
    esp = &var_8

esp[2]
fsbase->NtTib.ExceptionList = *esp
esp[2] = &data_46926f
struct _EXCEPTION_REGISTRATION_RECORD* eax_23 = var_8
eax_23->__offset(0x68).b = 0
return eax_23
