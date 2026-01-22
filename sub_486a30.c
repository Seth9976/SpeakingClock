// 函数: sub_486a30
// 地址: 0x486a30
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
char* var_24
__builtin_memset(&var_24, 0, 0x20)
int32_t ebx
int32_t var_28 = ebx
int32_t esi
int32_t var_2c = esi
int32_t* var_30 = &var_4
int32_t (* var_34)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
void* eax_1 = sub_405164(0x486ba0, arg1) + 1
void* var_8
sub_405080(sub_404e48(arg1), eax_1, arg1, &var_8)
struct _EXCEPTION_REGISTRATION_RECORD** esp_1 = &ExceptionList
int32_t eax_7 = sub_404e48(var_8) - 1

if (eax_7 s< 0)
    eax_7 += 3

int32_t eax_8 = eax_7 s>> 2

if (eax_8 s>= 0)
    int32_t i_1 = eax_8 + 1
    int32_t ebx_1 = 0
    int32_t i
    
    do
        int32_t eax_12 = ebx_1 * 4
        ((zx.d(*(var_8 + eax_12)) - 0x30) << 0x12) + ((zx.d(*(var_8 + eax_12 + 1)) - 0x30) << 0xc)
            + ((zx.d(*(var_8 + eax_12 + 2)) - 0x30) << 6)
        *(var_8 + eax_12 + 3)
        *(esp_1 - 4) = *arg2
        sub_404d70()
        int32_t var_18
        *(esp_1 - 8) = var_18
        sub_404d70()
        int32_t var_1c
        *(esp_1 - 0xc) = var_1c
        sub_404d70()
        int32_t var_20
        *(esp_1 - 0x10) = var_20
        sub_404f1c(arg2, 4)
        esp_1 = &esp_1[0xc]
        ebx_1 += 1
        i = i_1
        i_1 -= 1
    while (i != 1)

*(esp_1 - 4) = arg2
*(esp_1 - 8) = &var_24
sub_405080(sub_405164(0x486ba0, arg1) - 1, 1, arg1)
sub_405080(sub_40947c(var_24), 1, *arg2)
esp_1[2]
fsbase->NtTib.ExceptionList = *esp_1
esp_1[2] = sub_486b91
sub_404bac(&var_24, 4)
void** result = &var_8
sub_404b88(result)
return result
