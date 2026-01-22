// 函数: sub_412004
// 地址: 0x412004
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t ebp
int32_t var_4 = ebp
int32_t* var_8 = &var_4
int32_t (* var_c)(void* arg1, void* arg2) = j_sub_40338c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t** esp = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t temp0 = data_414850
data_414850 += 1

if (temp0 == 0xffffffff)
    sub_40f8ac(data_414660)
    esp = &var_8
    (*(*data_414848 + 0x14))()
    sub_411f90()
    sub_411684(0, nullptr)
    sub_40b6a0(&data_414860)
    sub_40b6a0(sub_4056cc() + 8)
    sub_40b6a0(&data_414858)
    sub_404f50(&data_414848)
    sub_404dec()
    sub_40b6a0(0x4133a0)
    sub_411f78()
    sub_40b6a0(0x41485c)
    sub_404f50(&data_414848)

esp[2]
fsbase->NtTib.ExceptionList = *esp
esp[2] = sub_4120af
return 0
