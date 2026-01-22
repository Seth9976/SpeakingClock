// 函数: sub_493388
// 地址: 0x493388
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
int32_t* var_1c = &var_4
int32_t (* var_20)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ecx
void* ebp_1
ecx, ebp_1 = sub_41fa14(arg1, &var_8)
void* edx_1 = data_4abfd4
sub_404dec(ecx, edx_1 + 9)
int32_t ecx_1 = sub_404fb0(*(ebp_1 - 4), *(ebp_1 - 8))

if (edx_1 == 0xfffffff7)
    *(data_4b1d94 + 0x50)

sub_404dec(ecx_1, data_4abfd4)
sub_404fb0(*(ebp_1 - 4), *(ebp_1 - 0xc))

if (edx_1 == 0xfffffff7)
    *(data_4b1d94 + 0x54)

fsbase->NtTib.ExceptionList = var_8
__return_addr = sub_49341a
return sub_404bac(ebp_1 - 0xc, 3)
