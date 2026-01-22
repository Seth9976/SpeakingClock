// 函数: sub_4868bc
// 地址: 0x4868bc
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* esp_2 = &var_4
int32_t i_3 = 4
int32_t i

do
    *(esp_2 - 4) = 0
    *(esp_2 - 8) = 0
    esp_2 -= 8
    i = i_3
    i_3 -= 1
while (i != 1)
*(esp_2 - 4) = i_3
int32_t entry_ebx
*(esp_2 - 8) = entry_ebx
*(esp_2 - 0xc) = arg3
*(esp_2 - 0x10) = &var_4
*(esp_2 - 0x14) = j_sub_40443c
TEB* fsbase
*(esp_2 - 0x18) = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = esp_2 - 0x18
sub_404e48(arg1)
int64_t* var_14
sub_409340(i_3, &var_14)
sub_404ea0(arg2, var_14, 0x486a20)
int64_t* var_18
*(esp_2 - 0x1c) = &var_18
sub_405080(2 - mods.dp.d(sx.q(sub_404e48(arg1) - 1), 3), 1, &data_486a2c)
void* esp_10 = esp_2 - 0x18
int32_t var_8
sub_404ea0(&var_8, arg1, var_18)
int32_t temp0 = divs.dp.d(sx.q(sub_404e48(var_8) - 1), 3)
int32_t var_28

if (temp0 s>= 0)
    int32_t i_2 = temp0 + 1
    int32_t esi = 0
    int32_t i_1
    
    do
        int32_t eax_14 = esi * 3
        (zx.d(*(var_8 + eax_14)) << 0x10) + (zx.d(*(var_8 + eax_14 + 1)) << 8)
            + zx.d(*(var_8 + eax_14 + 2))
        *(esp_10 - 4) = *arg2
        sub_404d70()
        int32_t var_1c
        *(esp_10 - 8) = var_1c
        sub_404d70()
        int32_t var_20
        *(esp_10 - 0xc) = var_20
        sub_404d70()
        int32_t var_24
        *(esp_10 - 0x10) = var_24
        sub_404d70()
        *(esp_10 - 0x14) = var_28
        sub_404f1c(arg2, 5)
        esp_10 += 0x1c
        esi += 1
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)

*(esp_10 + 8)
fsbase->NtTib.ExceptionList = *esp_10
*(esp_10 + 8) = sub_486a12
sub_404bac(&var_28, 6)
int32_t* result = &var_8
sub_404b88(result)
return result
