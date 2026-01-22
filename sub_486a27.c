// 函数: sub_486a27
// 地址: 0x486a27
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*arg2 += 1
*arg1 += arg1.b
*arg1 += arg1:1.b
*arg1 &= arg1.b
*(arg3 - 0x75) += arg2.b
int32_t eflags
arg1.b = __in_al_dx(arg2.w, eflags)
int32_t var_20
__builtin_memset(&var_20, 0, 0x20)
int32_t ebx
int32_t var_24 = ebx
int32_t esi
int32_t var_28 = esi
*(arg3 - 0xc) = arg2
*(arg3 - 8) = arg1
void* var_2c = arg3
int32_t (* var_30)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
void* eax_2 = sub_405164(0x486ba0, *(arg3 - 8)) + 1
sub_405080(sub_404e48(*(arg3 - 8)), eax_2, *(arg3 - 8), arg3 - 4)
struct _EXCEPTION_REGISTRATION_RECORD** esp_1 = &ExceptionList
int32_t eax_8 = sub_404e48(*(arg3 - 4)) - 1

if (eax_8 s< 0)
    eax_8 += 3

int32_t eax_9 = eax_8 s>> 2

if (eax_9 s>= 0)
    *(arg3 - 0x10) = eax_9 + 1
    int32_t ebx_1 = 0
    int32_t i
    
    do
        int32_t eax_13 = ebx_1 * 4
        ((zx.d(*(*(arg3 - 4) + eax_13)) - 0x30) << 0x12)
            + ((zx.d(*(*(arg3 - 4) + eax_13 + 1)) - 0x30) << 0xc)
            + ((zx.d(*(*(arg3 - 4) + eax_13 + 2)) - 0x30) << 6)
        *(*(arg3 - 4) + eax_13 + 3)
        *(esp_1 - 4) = **(arg3 - 0xc)
        sub_404d70()
        *(esp_1 - 8) = *(arg3 - 0x14)
        sub_404d70()
        *(esp_1 - 0xc) = *(arg3 - 0x18)
        sub_404d70()
        *(esp_1 - 0x10) = *(arg3 - 0x1c)
        sub_404f1c(*(arg3 - 0xc), 4)
        esp_1 = &esp_1[0xb]
        ebx_1 += 1
        i = *(arg3 - 0x10)
        *(arg3 - 0x10) -= 1
    while (i != 1)

*(esp_1 - 4) = *(arg3 - 0xc)
*(esp_1 - 8) = arg3 - 0x20
sub_405080(sub_405164(0x486ba0, *(arg3 - 8)) - 1, 1, *(arg3 - 8))
sub_405080(sub_40947c(*(arg3 - 0x20)), 1, **(arg3 - 0xc))
esp_1[2]
fsbase->NtTib.ExceptionList = *esp_1
esp_1[2] = sub_486b91
sub_404bac(arg3 - 0x20, 4)
sub_404b88(arg3 - 4)
return arg3 - 4
