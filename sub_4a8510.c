// 函数: sub_4a8510
// 地址: 0x4a8510
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_20 = ebx
int32_t esi
int32_t var_24 = esi
int32_t edi
int32_t var_28 = edi
int32_t edx
edx.b = 1
int32_t* eax = sub_43234c(sub_42a369+0x23, edx)
int32_t edx_2
void* ebp_1
edx_2, ebp_1 = sub_432720(eax, LoadIconA(data_4af7f4, "#9999"))
edx_2.b = 1
*(ebp_1 - 8) = sub_466960(0x10, edx_2, sub_45347e+0x6b2, 0x10)
void* var_2c_2 = ebp_1
int32_t (* var_30_1)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
*(ebp_1 - 1) = 0
sub_466fd0(*(ebp_1 - 8), eax)
int32_t edx_4
edx_4.b = 1
int32_t* eax_6 = sub_430618(sub_42a104+0x140, edx_4)
sub_42bbb0(*(sub_430bec(eax_6) + 0x14), 0x8000)
sub_467020(*(ebp_1 - 8), 0, eax_6)
sub_42bcec(*(sub_430bec(eax_6) + 0x14), 0)
sub_42b9d4(*(sub_430bec(eax_6) + 0x10), 1)
sub_42b8b8(*(sub_430bec(eax_6) + 0x10), 0)
*(ebp_1 - 0x14) = zx.d(*data_4ac378)
long double x87_r7 = float.t(*(ebp_1 - 0x14))
*(ebp_1 - 0x18) = zx.d(*data_4ac238)
*(ebp_1 - 0x10) = fconvert.d((x87_r7 + float.t(*(ebp_1 - 0x18)) / fconvert.t(60f)) * data_4a8780
    / fconvert.t(12f))
*(ebp_1 - 0x10) = fconvert.d(data_4a8790 + fconvert.t(*(ebp_1 - 0x10)))
sub_42c330(sub_430bec(eax_6), 8, 8)
long double var_40 = fconvert.t(*(ebp_1 - 0x10))
var_40:8.d = sub_403370(sub_403360() * fconvert.t(5f)) + 8
var_40:4.d = sub_403370(sub_403350(fconvert.t(*(ebp_1 - 0x10))) * fconvert.t(5f)) + 8
sub_42c2d0(sub_430bec(eax_6), var_40:4.d, var_40:8.d)
*(ebp_1 - 0x14) = zx.d(*data_4ac238)
*(ebp_1 - 0x10) = fconvert.d(float.t(*(ebp_1 - 0x14)) * data_4a8780 / fconvert.t(60f))
*(ebp_1 - 0x10) = fconvert.d(data_4a8790 + fconvert.t(*(ebp_1 - 0x10)))
sub_42c330(sub_430bec(eax_6), 8, 8)
long double var_40_1 = fconvert.t(*(ebp_1 - 0x10))
var_40_1:8.d = sub_403370(sub_403360() * fconvert.t(7f)) + 8
var_40_1:4.d = sub_403370(sub_403350(fconvert.t(*(ebp_1 - 0x10))) * fconvert.t(7f)) + 8
sub_42c2d0(sub_430bec(eax_6), var_40_1:4.d, var_40_1:8.d)
int32_t* ebx_2
void* ebp_2
int32_t* esi_2
ebx_2, ebp_2, esi_2 = sub_466eb4(*(ebp_1 - 8), eax_6, 0x8000)
sub_467088(*(ebp_2 - 8))
sub_403c68(ebx_2)
sub_49f5bc(*(*data_4ac0ac + 0x3fc))
sub_403c68(esi_2)
*(ebp_2 - 1) = 1
int32_t var_8
fsbase->NtTib.ExceptionList = var_8
__return_addr = sub_4a8766
return sub_403c68(*(ebp_2 - 8))
