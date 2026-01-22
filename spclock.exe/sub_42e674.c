// 函数: sub_42e674
// 地址: 0x42e674
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ecx
int32_t var_8 = ecx
int32_t* var_8_1 = nullptr

if (arg2 != 0)
    int32_t eax_1
    int32_t edx
    eax_1, edx = sub_403b40(arg2)
    edx.b = 1
    var_8_1 = (*(eax_1 + 0x48))()
    (*(*var_8_1 + 8))()
    var_8_1[5] = arg1
    int32_t edx_2
    edx_2.w = 0xfffd
    var_8_1[4] = sub_403e7c(arg1, edx_2)
    var_8_1[7] = arg1
    int32_t edx_3
    edx_3.w = 0xfffc
    var_8_1[6] = sub_403e7c(arg1, edx_3)

int32_t __saved_ebp
int32_t* var_18_3 = &__saved_ebp
int32_t (* var_1c)() = j_sub_404188
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
sub_403c68(arg1[3])
arg1[3] = var_8_1
int32_t* esi
esi.w = 0xfffd
sub_403e64(arg1, esi, arg1)
fsbase->NtTib.ExceptionList = ExceptionList
return 0
