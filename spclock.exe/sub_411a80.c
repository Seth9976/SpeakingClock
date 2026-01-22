// 函数: sub_411a80
// 地址: 0x411a80
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_2c = ebx
char* var_28 = nullptr
wchar16* var_8 = nullptr
int32_t* var_30 = &var_4
int32_t (* var_34)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t esi
int32_t ecx_1 = sub_404e10(sub_4141fc(&var_8, arg1, esi), var_8)
uint32_t var_14

if (sub_4094f0(var_28, &var_14, ecx_1) == 0)
    wchar16* var_18
    int32_t* var_c_1 = &var_18
    int32_t var_10_1 = 0
    var_14 = 0x400
    var_18 = var_8
    
    if ((*data_4ac48c)(var_18, var_14, var_10_1, var_c_1) != 0)
        double var_24
        int64_t* var_c_2 = &var_24
        int32_t var_10_3 = 0
        var_14 = 0x400
        var_18 = var_8
        uint32_t eax_12
        int32_t ecx_2
        int32_t edx_4
        eax_12, edx_4, ecx_2 = (*data_4ac290)(var_18, var_14, var_10_3, var_c_2)
        
        if (eax_12 == 0)
            uint32_t eax_13
            int32_t edx_5
            eax_13, edx_5 = sub_403370(fconvert.t(var_24))
            var_14 = eax_13
            int32_t var_10_4 = edx_5
        else if (eax_12 != 0x80020005)
            ecx_2.w = 0x14
            sub_41040c(eax_12, *arg1, ecx_2.w)
            var_14 = 0
            int32_t var_10_6 = 0
        else
            var_14 = sub_412230(arg1, edx_4, ecx_2) & 0x7f
            int32_t var_10_5 = 0
    else
        uint32_t eax_8
        int32_t edx_3
        edx_3:eax_8 = sx.q(var_18)
        var_14 = eax_8
        int32_t var_10_2 = edx_3

fsbase->NtTib.ExceptionList = var_8
__return_addr = sub_411b75
sub_404b88(&var_28)
wchar16** result = &var_8
sub_405368(result)
return result
