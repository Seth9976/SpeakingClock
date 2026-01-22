// 函数: sub_461e68
// 地址: 0x461e68
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t* var_c = nullptr
void* eax = *(arg1 + 0x1c)
int32_t esi
esi.w = 0xffb7
int32_t edx
sub_403e64(*(eax + 0x14), esi, edx, &var_c)
bool var_5 = var_c != 0

if (var_5 == 0)
    return zx.d(var_5)

*(eax + 0x38) = arg1
int32_t __saved_ebp
int32_t* var_1c = &__saved_ebp
int32_t (* var_20)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebp = sub_458610(0, *(eax + 0x14), var_c, 0)
fsbase->NtTib.ExceptionList = ExceptionList
int32_t var_1c_1 = 0x461ee0
void* result = *(ebp - 0xc)
*(result + 0x38) = 0
return result
