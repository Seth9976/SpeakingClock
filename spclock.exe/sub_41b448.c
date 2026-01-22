// 函数: sub_41b448
// 地址: 0x41b448
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_1c = ebx
int32_t esi
int32_t var_20 = esi
int32_t edi
int32_t var_24 = edi
int32_t* var_14 = nullptr
char* var_18 = nullptr
int32_t* var_28 = &var_4
int32_t (* var_2c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
char var_d = 0
int32_t i_2 = (*(*arg1 + 0x14))(ExceptionList, var_2c, var_28)

if (i_2 == (*(*arg2 + 0x14))(arg1))
    if (i_2 - 1 s>= 0)
        int32_t i_1 = i_2
        int32_t ebx_2 = 0
        bool cond:0_1 = false
        int32_t i
        
        do
            (*(*arg1 + 0xc))()
            (*(*var_14 + 0xc))(var_14)
            sub_404fb0(var_14, var_18)
            
            if (cond:0_1)
                goto label_41b4c7
            
            ebx_2 += 1
            i = i_1
            i_1 -= 1
            cond:0_1 = i != 1
        while (i != 1)
    
    char var_d_1 = 1

label_41b4c7:
fsbase->NtTib.ExceptionList = arg1
__return_addr = sub_41b4e4
return sub_404bac(&var_18, 2)
