// 函数: sub_48aff4
// 地址: 0x48aff4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_10 = ebx
DEVMODEA* pdm = nullptr
PSTR pszPort = nullptr
PSTR ExceptionList = nullptr
HDC hdc = CreateDCA("Display", ExceptionList, pszPort, pdm)
int32_t* var_14 = &var_4
int32_t (* var_18)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
char var_5 = (GetDeviceCaps(hdc, 0xe) * GetDeviceCaps(hdc, 0xc)).b
fsbase->NtTib.ExceptionList = ExceptionList
uint32_t (__stdcall* var_14_1)(void* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_48b059
return DeleteDC(hdc)
