// 函数: sub_41ad08
// 地址: 0x41ad08
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ecx
int32_t var_8 = ecx

if (sub_403df4(arg2, 0x417a68) == 0)
    return sub_41a70c(ecx, arg2)

(*(*arg1 + 0x20))()
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* __saved_ebx_1 = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
fsbase->NtTib.ExceptionList = &__saved_ebx
void* ebp = sub_41adb4(j_sub_40443c)
int32_t ebx_1 = sub_41ae58(arg2) - 1

if (ebx_1 s>= 0)
    int32_t i_1 = ebx_1 + 1
    int32_t edi_1 = 0
    int32_t i
    
    do
        int32_t __saved_esi_2
        int32_t ecx_1
        int32_t edx_2
        __saved_esi_2, ecx_1, edx_2 = sub_41ae60(arg2, edi_1)
        int32_t __saved_esi_1 = __saved_esi_2
        int32_t __saved_ebp
        (*(*sub_41ace8(*(ebp - 4), edx_2, ecx_1) + 8))(__saved_ebx_1, j_sub_40443c, &__saved_ebp)
        edi_1 += 1
        i = i_1
        i_1 -= 1
    while (i != 1)

fsbase->NtTib.ExceptionList = __saved_ebx_1
return (*(**(ebp - 4) + 0x24))(&data_41ad97)
