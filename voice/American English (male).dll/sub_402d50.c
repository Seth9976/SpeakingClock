// 函数: sub_402d50
// 地址: 0x402d50
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

uint32_t data = zx.d(data_413020)
HKEY hKey
HKEY* phkResult = &hKey
enum REG_SAM_FLAGS samDesired = KEY_QUERY_VALUE
uint32_t ExceptionList = 0

if (RegOpenKeyExA(0x80000002, "SOFTWARE\Borland\Delphi\RTL", ExceptionList, samDesired, phkResult)
        != NO_ERROR)
    enum WIN32_ERROR result
    result.w = data_413020
    result.w &= 0xffc0
    result.w |= data.w & 0x3f
    data_413020 = result.w
    return result

int32_t __saved_ebp
int32_t* var_14 = &__saved_ebp
int32_t (* var_18)(void* arg1, void* arg2) = j_sub_40338c
TEB* fsbase
ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t lpcbData = 4
RegQueryValueExA(hKey, "FPUMaskValue", nullptr, nullptr, &data, &lpcbData)
fsbase->NtTib.ExceptionList = ExceptionList
int32_t var_14_1 = 0x402dc8
return RegCloseKey(hKey)
