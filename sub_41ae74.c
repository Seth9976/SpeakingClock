// 函数: sub_41ae74
// 地址: 0x41ae74
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
int32_t ebx
int32_t var_110 = ebx
int32_t esi
int32_t var_114 = esi
int32_t edi
int32_t var_118 = edi
int32_t var_8 = 0
int32_t var_c = 0
int32_t* var_11c = &var_4
int32_t (* var_120)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
char var_10c[0x100]
sub_404dec(sub_403b48(*arg1, &var_10c), &var_10c)
esi.w = 0xffff

if (sub_403e64(arg1, esi) != 0)
    esi.w = 0xffff
    int32_t* eax_5 = sub_403e64(arg1, esi)
    esi.w = 0xfffe
    sub_403e64(eax_5, esi, &var_8)
    
    if (var_8 != 0)
        ebp_1 = sub_41af3c(arg1, &var_c)
        
        if (ebp_1[-2] != 0)
            int32_t var_128_1 = ebp_1[-1]
            void* const var_12c_1 = &data_41af38
            int32_t var_130_1 = ebp_1[-2]
            sub_404f1c(arg2, 3)

fsbase->NtTib.ExceptionList = ExceptionList
int32_t (* var_11c_1)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_41af29
return sub_404bac(&ebp_1[-2], 2)
