// 函数: sub_405fac
// 地址: 0x405fac
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

WIN32_FIND_DATAA findFileData
findFileData.__offset(0x13e).d = GetModuleHandleA("kernel32.dll")
uint8_t var_257[0x105]

if (findFileData.__offset(0x13e).d == 0)
label_40601d:
    char* lpString2
    
    if (*arg1 != 0x5c)
        lpString2 = &arg1[2]
    label_406062:
        int32_t ebx_3 = lpString2 - arg1
        lstrcpynA(&var_257, arg1, ebx_3 + 1)
        
        while (true)
            if (*lpString2 == 0)
                lstrcpynA(arg1, &var_257, arg2)
                break
            
            char* lpString2_1 = sub_405f8c(&lpString2[1])
            
            if (lpString2_1 - lpString2 + ebx_3 + 1 s> 0x105)
                break
            
            lstrcpynA(&var_257[ebx_3], lpString2, lpString2_1 - lpString2 + 1)
            findFileData.__offset(0x13e).d = FindFirstFileA(&var_257, &findFileData)
            
            if (findFileData.__offset(0x13e).d == 0xffffffff)
                break
            
            FindClose(findFileData.__offset(0x13e).d)
            var_126
            
            if (lstrlenA(&var_126) + ebx_3 + 1 + 1 s> 0x105)
                break
            
            var_257[ebx_3] = 0x5c
            lstrcpynA(&var_257[ebx_3 + 1], &var_126, 0x105 - ebx_3 - 1)
            ebx_3 += lstrlenA(&var_126) + 1
            lpString2 = lpString2_1
    else if (arg1[1] == 0x5c)
        char* eax_12 = sub_405f8c(&arg1[2])
        
        if (*eax_12 != 0)
            lpString2 = sub_405f8c(&eax_12[1])
            
            if (*lpString2 != 0)
                goto label_406062
else
    int32_t eax_3 = GetProcAddress(findFileData.__offset(0x13e).d, "GetLongPathNameA")
    
    if (eax_3 == 0)
        goto label_40601d
    
    if (eax_3(arg1, &var_257, 0x105) == 0)
        goto label_40601d
    
    lstrcpynA(arg1, &var_257, arg2)
return arg1
