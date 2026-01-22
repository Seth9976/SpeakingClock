// 函数: sub_48172c
// 地址: 0x48172c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
int32_t ebx
int32_t var_14 = ebx
int32_t esi
int32_t var_18 = esi
int32_t edi
int32_t var_1c = edi
int32_t var_10 = 0
int32_t* var_20 = &var_4
int32_t (* var_24)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_2 = (*(*arg1[0x9c] + 0x14))(ExceptionList, var_24, var_20) - 1

if (eax_2 s< 0)
label_4817e1:
    ebp_1[-1]
    sub_45ecdc()
else
    int32_t var_c_1 = eax_2 + 1
    int32_t ebx_1 = 0
    
    while (true)
        int32_t ecx_2 = (*(*arg1[0x9c] + 0xc))(arg2)
        *(ebp_1[-1] + 4)
        char eax_7
        int32_t esi_2
        eax_7, ebp_1, esi_2 = sub_46be60(ecx_2, ebp_1[-3])
        
        if (eax_7 != 0 && (*(*arg1 + 0xd8))() != 0)
            esi_2.w = 0xffb6
            
            if (sub_403e64(arg1, esi_2) != 0)
                *(ebp_1[-1] + 0xc) = 1
                esi_2.w = 0xffb0
                
                if (sub_403e64(arg1, esi_2) != 0)
                    (*(*arg1 + 0xe4))()
                    esi_2.w = 0xffaf
                    sub_403e64(arg1, esi_2)
                
                break
        
        ebx_1 += 1
        int32_t temp0_1 = ebp_1[-2]
        ebp_1[-2] -= 1
        
        if (temp0_1 == 1)
            goto label_4817e1

fsbase->NtTib.ExceptionList = arg2
__return_addr = sub_481808
sub_404b88(&ebp_1[-3])
return &ebp_1[-3]
