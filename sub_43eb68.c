// 函数: sub_43eb68
// 地址: 0x43eb68
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t entry_ebx
int32_t var_4 = entry_ebx
int32_t* var_8 = &var_4
int32_t** var_c = &var_8
*arg1 += arg1.b
int32_t ebp
int32_t var_10 = ebp
int32_t* ebp_1 = &var_10
int32_t* var_14 = nullptr
int32_t var_18 = entry_ebx + 1
int32_t* var_24 = &var_10
int32_t (* var_28)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t** esp = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 0x254) != 0)
    char eax_1
    int32_t ecx_2
    eax_1, ecx_2 = (*(*arg1 + 0x50))()
    esp = &var_8
    
    if (eax_1 != 0 && arg1[0x258] != 0)
        int32_t ecx_3 = sub_4577d8(ecx_2, &var_14)
        *(arg2 + 4)
        char eax_4
        int32_t esi_1
        eax_4, ebp_1, esi_1 = sub_46be60(ecx_3, var_14)
        
        if (eax_4 != 0)
            int32_t* ebx_2 = *(arg1 + 0x254)
            esi_1.w = 0xffb6
            
            if (sub_403e64(ebx_2, esi_1) != 0)
                (*(*ebx_2 + 0xd4))()
                *(arg2 + 0xc) = 1

esp[2]
fsbase->NtTib.ExceptionList = *esp
esp[2] = sub_43ec04
return sub_43ebf4(ebp_1) __tailcall
