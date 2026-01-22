// 函数: sub_424bac
// 地址: 0x424bac
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* var_8 = &var_4
int32_t (* var_c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t** esp = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t temp0 = data_4b19c0
data_4b19c0 += 1

if (temp0 == 0xffffffff)
    sub_4196d8(data_4af7f4)
    esp = &var_8
    (*(*data_4b19b4 + 0x14))()
    sub_424358()
    sub_41d914(0, 0)
    sub_40eb14(&data_4b19d0)
    sub_40eb14(sub_406b68() + 0xc)
    sub_40eb14(&data_4b19c8)
    sub_406550(&data_4b19b4)
    sub_4063e8()
    sub_40eb14(&data_4aac00)
    sub_422aec()
    sub_40eb14(&data_4b19cc)
    sub_406550(&data_4b19b4)

esp[2]
fsbase->NtTib.ExceptionList = *esp
esp[2] = sub_424c57
return 0
