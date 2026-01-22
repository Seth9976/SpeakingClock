// 函数: sub_42ae38
// 地址: 0x42ae38
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

CRITICAL_SECTION* lpCriticalSection = *(arg1 + 0x14)

if (lpCriticalSection != 0)
    LeaveCriticalSection(lpCriticalSection)
