// 函数: sub_482984
// 地址: 0x482984
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
int32_t ebx
int32_t var_10 = ebx
int32_t esi
int32_t var_14 = esi
int32_t edi
int32_t var_18 = edi
char* var_8 = nullptr
int32_t* ebx_1 = arg1
int32_t* var_1c = &var_4
int32_t (* var_20)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* eax_1
int32_t ecx
eax_1, ecx = sub_48239c(ebx_1, *(arg2 + 4))

if (eax_1 != 0)
    int32_t eax_3 = **(arg2 + 8)
    
    if (eax_3 == 0xc)
        sub_404d80(ecx, *(*(arg2 + 8) + 8))
        char* eax_6 = var_8
        
        if (eax_6 != 0)
            eax_6 = *(eax_6 - 4)
        
        if (eax_6 s> 0)
            int32_t var_c_1 = 1
            
            while (true)
                char edx_4 = var_8[var_c_1 - 1]
                
                if (edx_4 != 0xa && edx_4 != 0xd)
                    var_c_1 += 1
                    char* temp4_1 = eax_6
                    eax_6 -= 1
                    
                    if (temp4_1 == 1)
                        break
                    
                    continue
                
                sub_4052a8(&var_8, var_c_1 - 1)
                break
        
        void* esi_1
        ebx_1, ebp_1, esi_1 = sub_457808(eax_1, var_8)
    else if (eax_3 == 0xb00b)
        sub_481bbc(eax_1, (*(*(arg2 + 8) + 4)).b)

(*(*ebx_1 - 0x10))()
fsbase->NtTib.ExceptionList = var_8
__return_addr = sub_482a54
sub_404b88(&ebp_1[-1])
return &ebp_1[-1]
