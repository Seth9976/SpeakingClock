// 函数: sub_404b74
// 地址: 0x404b74
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

HMODULE ExceptionList = nullptr
uint8_t var_121[0x105]
GetModuleFileNameA(ExceptionList, &var_121, 0x105)
uint8_t data = 0
HKEY hKey
HKEY* phkResult = &hKey
enum REG_SAM_FLAGS samDesired = 0xf0019
ExceptionList = nullptr

if (RegOpenKeyExA(0x80000001, "Software\Borland\Locales", ExceptionList, samDesired, phkResult)
        != NO_ERROR)
    HKEY* phkResult_1 = &hKey
    enum REG_SAM_FLAGS samDesired_1 = 0xf0019
    ExceptionList = nullptr
    
    if (RegOpenKeyExA(0x80000002, "Software\Borland\Locales", ExceptionList, samDesired_1, 
            phkResult_1) != NO_ERROR)
        HKEY* phkResult_2 = &hKey
        enum REG_SAM_FLAGS samDesired_2 = 0xf0019
        ExceptionList = nullptr
        
        if (RegOpenKeyExA(0x80000001, "Software\Borland\Delphi\Locales", ExceptionList, 
                samDesired_2, phkResult_2) != NO_ERROR)
            int32_t iMaxLength = 0x105
            ExceptionList = &var_121
            lstrcpynA(ExceptionList, arg1, iMaxLength)
            int32_t cchData = 5
            uint8_t var_11
            uint8_t* lpLCData = &var_11
            ExceptionList = 3
            GetLocaleInfoA(GetThreadLocale(), ExceptionList, lpLCData, cchData)
            HMODULE result = nullptr
            
            if (var_121[0] != 0 && (var_11 != 0 || data != 0))
                void* ebx_2 = &var_121[lstrlenA(&var_121)]
                
                while (*ebx_2 != 0x2e)
                    if (ebx_2 == &var_121)
                        break
                    
                    ebx_2 -= 1
                
                if (ebx_2 != &var_121)
                    if (data != 0)
                        uint8_t* lpString2 = &data
                        ExceptionList = ebx_2 + 1
                        lstrcpynA(ExceptionList, lpString2, 0x105 - (ebx_2 + 1 - &var_121))
                        enum LOAD_LIBRARY_FLAGS dwFlags = LOAD_LIBRARY_AS_DATAFILE
                        HANDLE hFile = nullptr
                        ExceptionList = &var_121
                        result = LoadLibraryExA(ExceptionList, hFile, dwFlags)
                    
                    if (result == 0 && var_11 != 0)
                        uint8_t* lpString2_1 = &var_11
                        ExceptionList = ebx_2 + 1
                        lstrcpynA(ExceptionList, lpString2_1, 0x105 - (ebx_2 + 1 - &var_121))
                        enum LOAD_LIBRARY_FLAGS dwFlags_1 = LOAD_LIBRARY_AS_DATAFILE
                        HANDLE hFile_1 = nullptr
                        ExceptionList = &var_121
                        result = LoadLibraryExA(ExceptionList, hFile_1, dwFlags_1)
                        
                        if (result == 0)
                            char var_f_1 = 0
                            uint8_t* lpString2_2 = &var_11
                            ExceptionList = ebx_2 + 1
                            lstrcpynA(ExceptionList, lpString2_2, 0x105 - (ebx_2 + 1 - &var_121))
                            enum LOAD_LIBRARY_FLAGS dwFlags_2 = LOAD_LIBRARY_AS_DATAFILE
                            HANDLE hFile_2 = nullptr
                            ExceptionList = &var_121
                            return LoadLibraryExA(ExceptionList, hFile_2, dwFlags_2)
            
            return result

int32_t __saved_ebp
int32_t* var_130_1 = &__saved_ebp
int32_t (* var_134_1)(void* arg1, void* arg2) = j_sub_40338c
TEB* fsbase
ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t lpcbData = 5
sub_4049bc(&var_121, 0x105)

if (RegQueryValueExA(hKey, &var_121, nullptr, nullptr, &data, &lpcbData) != NO_ERROR
        && RegQueryValueExA(hKey, 0x404de0, nullptr, nullptr, &data, &lpcbData) != NO_ERROR)
    data = 0

char var_12 = 0
fsbase->NtTib.ExceptionList = ExceptionList
int32_t var_130_2 = 0x404c80
return RegCloseKey(hKey)
