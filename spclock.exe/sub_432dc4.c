// 函数: sub_432dc4
// 地址: 0x432dc4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t __saved_ebp
int32_t* var_8 = &__saved_ebp
int32_t (* var_c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t temp1 = data_4b1a4c
data_4b1a4c += 1

if (temp1 == 0xffffffff)
    sub_403c68(data_4b1aa4)
    sub_403c68(data_4aaefc)
    sub_403c68(data_4aaef8)
    sub_42f854()
    sub_403c68(data_4aaf00)
    sub_403c68(data_4b1aa0)
    sub_403c68(data_4b1a94)
    sub_403c68(data_4b1a98)
    sub_403c68(data_4b1a9c)
    DeleteObject(data_4b1a48)
    DeleteCriticalSection(&data_4b1a64)
    DeleteCriticalSection(&data_4b1a7c)
    sub_405724(0x4aac74, sub_418968+0xb4, 0x34)
    sub_405724(0x4aae14, sub_418968+0xb4, 0x12)

fsbase->NtTib.ExceptionList = ExceptionList
return 0
