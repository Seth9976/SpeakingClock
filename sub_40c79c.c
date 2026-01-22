// 函数: sub_40c79c
// 地址: 0x40c79c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t var_8 = 0
int32_t var_c = 0
int64_t* var_10 = nullptr
int64_t* var_14 = nullptr
int64_t* var_18 = nullptr
int64_t* var_1c = nullptr
int32_t ebx
int32_t var_20 = ebx
int32_t esi
int32_t var_24 = esi
int32_t edi
int32_t var_28 = edi
int32_t* var_2c = &var_4
int32_t (* var_30)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t var_8_1 = GetThreadLocale()
int32_t i = 1
void* esi_1 = &data_4af834
void* edi_1 = &data_4af864

do
    int32_t* var_38_1 = &var_4
    sub_40c760("$~@", i - 1, i + 0x43, &var_10, 0xb)
    sub_404bdc(esi_1, var_10)
    int32_t* var_38_2 = &var_4
    sub_40c760(&data_4aa8ac, i - 1, i + 0x37, &var_14, 0xb)
    sub_404bdc(edi_1, var_14)
    i += 1
    edi_1 += 4
    esi_1 += 4
while (i != 0xd)

int32_t i_1 = 1
void* esi_2 = &data_4af894
void* edi_2 = &data_4af8b0

do
    int32_t temp1_1 = mods.dp.d(sx.q(i_1 + 5), 7)
    int32_t* var_38_3 = &var_4
    sub_40c760(&data_4aa8dc, i_1 - 1, temp1_1 + 0x31, &var_18, 6)
    sub_404bdc(esi_2, var_18)
    int32_t* var_38_4 = &var_4
    sub_40c760(&data_4aa8f8, i_1 - 1, temp1_1 + 0x2a, &var_1c, 6)
    sub_404bdc(edi_2, var_1c)
    i_1 += 1
    edi_2 += 4
    esi_2 += 4
while (i_1 != 8)

fsbase->NtTib.ExceptionList = ExceptionList
int32_t (* var_2c_1)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_40c8b6
return sub_404bac(&var_1c, 4)
