// 函数: sub_403a60
// 地址: 0x403a60
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

uint32_t data = zx.d(data_4aa020)
HKEY hKey
HKEY* phkResult = &hKey
enum REG_SAM_FLAGS samDesired = KEY_QUERY_VALUE
uint32_t ExceptionList = 0

if (RegOpenKeyExA(0x80000002, "SOFTWARE\Borland\Delphi\RTL", ExceptionList, samDesired, phkResult)
        != NO_ERROR)
    int16_t result = (data_4aa020 & 0xffc0) | (data.w & 0x3f)
    data_4aa020 = result
    return result

int32_t __saved_ebp
int32_t* var_14 = &__saved_ebp
int32_t (* var_18)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t lpcbData = 4
RegQueryValueExA(hKey, "FPUMaskValue", nullptr, nullptr, &data, &lpcbData)
fsbase->NtTib.ExceptionList = ExceptionList
int32_t var_14_1 = 0x403ad8
return RegCloseKey(hKey)
