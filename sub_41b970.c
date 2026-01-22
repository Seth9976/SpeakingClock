// 函数: sub_41b970
// 地址: 0x41b970
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_20 = ebx
int32_t esi
int32_t var_24 = esi
int32_t var_1c = 0
int32_t var_18 = 0
void* var_8 = nullptr
int32_t edx
int32_t var_c = edx
int32_t* var_28 = &var_4
int32_t (* var_2c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_2 = (*(*arg1 + 0x14))(ExceptionList, var_2c, var_28) - 1

if (eax_2 s>= 0)
    int32_t i_1 = eax_2 + 1
    int32_t var_10_1 = 0
    int32_t i
    
    do
        (*(*arg1 + 0xc))()
        sub_41c14c(arg1)
        sub_404d70()
        void* eax_8 = sub_40dc14(var_18, var_8)
        
        if (eax_8 != 0)
            sub_405080(eax_8 - 1, 1, var_8, &var_1c)
            
            if ((*(*arg1 + 0x34))() == 0)
                goto label_41ba15
        
        var_10_1 += 1
        i = i_1
        i_1 -= 1
    while (i != 1)

int32_t var_10_2 = 0xffffffff
label_41ba15:
fsbase->NtTib.ExceptionList = var_8
__return_addr = sub_41ba3a
sub_404bac(&var_1c, 2)
void** result = &var_8
sub_404b88(result)
return result
