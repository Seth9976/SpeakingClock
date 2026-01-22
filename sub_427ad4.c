// 函数: sub_427ad4
// 地址: 0x427ad4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_18 = ebx
int32_t esi
int32_t var_1c = esi
void* var_14 = nullptr
void* var_8 = nullptr
int32_t* var_c = arg2
int32_t* var_20 = &var_4
int32_t (* var_24)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
(*(*arg1 + 0x44))(ExceptionList, var_24, var_20)
int32_t i = (*(*arg3 + 0x14))(var_8) - 1

if (i s>= 0)
    do
        (*(*arg3 + 0xc))()
        void* ebx_2 = var_c
        
        if (ebx_2 != 0)
            ebx_2 = *(ebx_2 - 4)
        
        var_c = &var_14
        sub_405080(ebx_2, 1, var_8, var_c)
        
        if (sub_408f64(var_c, var_14) == 0)
            (*(*arg3 + 0x48))()
        
        i -= 1
    while (i != 0xffffffff)

fsbase->NtTib.ExceptionList = var_8
__return_addr = sub_427b80
sub_404b88(&var_14)
void** result = &var_8
sub_404b88(result)
return result
