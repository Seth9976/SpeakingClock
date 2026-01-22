// 函数: sub_473c54
// 地址: 0x473c54
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
char* var_8 = nullptr
int32_t ebx
int32_t var_c = ebx
int32_t esi
int32_t var_10 = esi
int32_t edi
int32_t var_14 = edi
int32_t* var_18 = &var_4
int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
(*(*arg1 - 0x10))(ExceptionList, var_1c, var_18)
int32_t eax_2 = **(arg2 + 8)

if (eax_2 == 0xc)
    *(arg2 + 4)
    sub_457748()
    sub_404c78(&var_8, nullptr, 1)
    char* edi_1 = var_8
    
    if (edi_1 != 0)
        edi_1 = *(edi_1 - 4)
    
    int32_t eax_10 = sub_405018(var_8)
    *(arg2 + 4)
    sub_457758(edi_1, eax_10)
    char* eax_12 = var_8
    
    if (eax_12 != 0)
        eax_12 = *(eax_12 - 4)
    
    if (eax_12 s> 0)
        int32_t ebx_2 = 1
        
        while (true)
            char edx_4 = var_8[ebx_2 - 1]
            
            if (edx_4 != 0xa && edx_4 != 0xd)
                ebx_2 += 1
                char* temp4_1 = eax_12
                eax_12 -= 1
                
                if (temp4_1 == 1)
                    break
                
                continue
            
            sub_4052a8(&var_8, ebx_2 - 1)
            break
    
    ebp_1 = sub_457808(arg1, var_8)
else if (eax_2 == 0xb00b)
    sub_46e590(arg1, *(*(arg2 + 4) + 0x57))

fsbase->NtTib.ExceptionList = var_8
__return_addr = sub_473d30
sub_404b88(&ebp_1[-1])
return &ebp_1[-1]
