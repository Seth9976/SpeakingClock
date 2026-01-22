// 函数: sub_421994
// 地址: 0x421994
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t var_8 = 0
int32_t ebx
int32_t var_c = ebx
int32_t esi
int32_t var_10 = esi
int32_t edi
int32_t var_14 = edi
int32_t esi_1 = arg1
int32_t* var_18 = &var_4
int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
char* edi_1 = **(sub_416064(*(arg2 - 0xc)) + 1)
*(arg2 - 4)
int32_t ecx
int32_t ecx_1 = sub_4229ec(ecx, 0xb)

for (int32_t i = 0; i != 0x20; i += 1)
    bool c_1 = i u< 0x1f
    
    if (i == 0x1f || c_1)
        c_1 = test_bit(esi_1, i)
    
    if (c_1)
        int32_t ecx_3
        ecx_3, i, esi_1 = sub_4163bc(edi_1, i, &var_8)
        ecx_1 = sub_4227e8(*(arg2 - 4), var_8, ecx_3)

sub_4227e8(*(arg2 - 4), 0, ecx_1)
fsbase->NtTib.ExceptionList = ExceptionList
int32_t (__stdcall* var_18_1)(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) = sub_421a21
int32_t* result = &var_8
sub_404b88(result)
return result
