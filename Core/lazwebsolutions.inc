{$mode objfpc}{$H+}{$R-}
{.$DEFINE DEBUGHEAP} // See memory leaks.
{.$DEFINE DEBUG}
{$DEFINE UseCThreads}
{$DEFINE LWSINLINE}
{$IFDEF DEBUG}
 {$DEFINE DEBUGHEAP}
{$ENDIF}
{$IFDEF LWSINLINE}
  {$INLINE ON}
{$ENDIF}
{$DEFINE LSNEWLAZARUS}