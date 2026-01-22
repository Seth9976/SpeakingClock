// 函数: sub_42ee84
// 地址: 0x42ee84
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_70 = ebx
int32_t esi
int32_t var_74 = esi
int32_t edi
int32_t var_78 = edi
sub_42edf0(arg1)
int64_t var_6c[0x3]
sub_41caa0(arg2, &var_6c, 0x64)
int32_t var_44

if (var_44 != 0x464d4520)
    sub_42ca38()

uint32_t nSize
int64_t* pb = sub_402ea8(nSize)
void* ebx_1 = *(arg1 + 0x28)
int32_t* var_7c = &var_4
int32_t (* var_80)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
sub_4030d0(&var_6c, pb, 0x64, ExceptionList, var_80, var_7c)
sub_41caa0(arg2, pb + 0x64, nSize - 0x64)
HENHMETAFILE eax_7 = SetEnhMetaFileBits(nSize, pb)
*(ebx_1 + 8) = eax_7

if (eax_7 == 0)
    sub_42ca38()

*(ebx_1 + 0x18) = 0
int32_t var_54
int32_t var_4c
*(ebx_1 + 0xc) = var_4c - var_54
int32_t var_50
int32_t var_48
*(ebx_1 + 0x10) = var_48 - var_50
*(arg1 + 0x2c) = 1
fsbase->NtTib.ExceptionList = ExceptionList
int32_t (* var_7c_1)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_42ef4b
return sub_402ec4(pb)
