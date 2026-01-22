// 函数: sub_422934
// 地址: 0x422934
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t var_8 = 0
int32_t var_c = 0
int32_t var_10 = 0
int32_t ebx
int32_t var_14 = ebx
int32_t esi
int32_t var_18 = esi
int32_t edi
int32_t var_1c = edi
int32_t* var_20 = &var_4
int32_t (* var_24)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ecx
void* ebp_1
uint32_t esi_2
ecx, ebp_1, esi_2 = sub_40686c(arg2, &var_8)
int32_t ebx_1 = *(ebp_1 - 4)

if (ebx_1 != 0)
    ebx_1 = *(ebx_1 - 4)

if (ebx_1 s>= sub_4054e8(esi_2) * 2)
    sub_4229ec(ecx, 0x12)
    *(ebp_1 - 8) = sub_4054e8(esi_2)
    sub_420654(arg1, ebp_1 - 8, 4)
    sub_420654(arg1, esi_2, *(ebp_1 - 8) * 2)
else
    sub_404e10(ecx, esi_2)
    sub_422834(arg1, *(ebp_1 - 0xc), *(ebp_1 - 4))

fsbase->NtTib.ExceptionList = ExceptionList
int32_t (* var_20_1)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_4229e3
sub_404b88(ebp_1 - 0xc)
sub_404b88(ebp_1 - 4)
return ebp_1 - 4
