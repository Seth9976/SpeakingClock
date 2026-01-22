// 函数: sub_4049bc
// 地址: 0x4049bc
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

WIN32_FIND_DATAA findFileData
findFileData.__offset(0x13e).d = arg1
HMODULE hModule = GetModuleHandleA("kernel32.dll")
uint8_t var_253[0x105]

if (hModule == 0)
label_404a27:
    char* lpString2
    
    if (*arg1 != 0x5c)
        lpString2 = &arg1[2]
    label_404a6c:
        int32_t ebx_3 = lpString2 - arg1
        lstrcpynA(&var_253, arg1, ebx_3 + 1)
        
        while (true)
            if (*lpString2 == 0)
                lstrcpynA(arg1, &var_253, arg2)
                break
            
            char* lpString2_1 = sub_4049a8(&lpString2[1])
            void* eax_17 = lpString2_1 - lpString2
            
            if (eax_17 + ebx_3 + 1 s> 0x105)
                break
            
            lstrcpynA(&var_253[ebx_3], lpString2, eax_17 + 1)
            HANDLE hFindFile = FindFirstFileA(&var_253, &findFileData)
            
            if (hFindFile == 0xffffffff)
                break
            
            FindClose(hFindFile)
            var_122
            
            if (lstrlenA(&var_122) + ebx_3 + 1 + 1 s> 0x105)
                break
            
            var_253[ebx_3] = 0x5c
            lstrcpynA(&var_253[ebx_3 + 1], &var_122, 0x105 - ebx_3 - 1)
            ebx_3 += lstrlenA(&var_122) + 1
            lpString2 = lpString2_1
    else if (arg1[1] == 0x5c)
        char* eax_10 = sub_4049a8(&arg1[2])
        
        if (*eax_10 != 0)
            lpString2 = sub_4049a8(&eax_10[1])
            
            if (*lpString2 != 0)
                goto label_404a6c
else
    int32_t eax_1 = GetProcAddress(hModule, "GetLongPathNameA")
    
    if (eax_1 == 0)
        goto label_404a27
    
    if (eax_1(arg1, &var_253, 0x105) == 0)
        goto label_404a27
    
    lstrcpynA(arg1, &var_253, arg2)
return findFileData.__offset(0x13e).d
