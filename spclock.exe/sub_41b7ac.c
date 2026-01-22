// 函数: sub_41b7ac
// 地址: 0x41b7ac
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_30 = ebx
int32_t esi
int32_t var_34 = esi
int32_t var_28 = 0
int64_t* var_8 = nullptr
int64_t* var_c = nullptr
int32_t* var_38 = &var_4
int32_t (* var_3c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t i_4 = (*(*arg1 + 0x14))(ExceptionList, var_3c, var_38)
void* var_1c = nullptr
sub_41c0a8(arg1, &var_c)

if (i_4 - 1 s>= 0)
    int32_t i_2 = i_4
    int32_t var_18_1 = 0
    int32_t i
    
    do
        (*(*arg1 + 0xc))(var_8)
        int32_t eax_4 = var_28
        
        if (eax_4 != 0)
            eax_4 = *(eax_4 - 4)
        
        int64_t* edx_3 = var_c
        
        if (edx_3 != 0)
            edx_3 = *(edx_3 - 4)
        
        var_1c += edx_3 + eax_4
        var_18_1 += 1
        i = i_2
        i_2 -= 1
    while (i != 1)

sub_404c78(arg2, nullptr, var_1c)
void* var_24 = *arg2

if (i_4 - 1 s>= 0)
    int32_t i_3 = i_4
    int32_t var_18_2 = 0
    int32_t i_1
    
    do
        (*(*arg1 + 0xc))(var_8)
        int64_t* eax_10 = var_8
        
        if (eax_10 != 0)
            eax_10 = *(eax_10 - 4)
        
        if (eax_10 != 0)
            sub_4030d0(var_8, var_24, eax_10)
            var_24 += eax_10
        
        int64_t* eax_14 = var_c
        
        if (eax_14 != 0)
            eax_14 = *(eax_14 - 4)
        
        if (eax_14 != 0)
            sub_4030d0(var_c, var_24, eax_14)
            var_24 += eax_14
        
        var_18_2 += 1
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

fsbase->NtTib.ExceptionList = var_8
__return_addr = sub_41b8dc
sub_404b88(&var_28)
return sub_404bac(&var_c, 2)
