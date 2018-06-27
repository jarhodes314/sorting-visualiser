#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#pragma clang diagnostic ignored "-Wtypedef-redefinition"
#pragma clang diagnostic ignored "-Wobjc-designated-initializers"
#include <stdarg.h>
#include <objc/objc.h>
#include <objc/runtime.h>
#include <objc/message.h>
#import <Foundation/Foundation.h>
#import <AppKit/AppKit.h>
#import <WebKit/WebKit.h>
#import <JavaScriptCore/JavaScriptCore.h>
#import <QuartzCore/QuartzCore.h>
#import <QuartzCore/QuartzCore.h>
#import <CloudKit/CloudKit.h>
#import <CoreGraphics/CoreGraphics.h>

@class NSDraggingSource;
@class NSOpenSavePanelDelegate;
@class NSWindowDelegate;
@class NSMenuDelegate;
@class NSTextViewDelegate;
@class NSApplicationDelegate;
@class NSOutlineViewDelegate;
@class NSOutlineViewDataSource;
@class NSTableViewDataSource;
@class NSTableViewDelegate;
@class NSSplitViewDelegate;
@class WebUIDelegate;
@class NSToolbarDelegate;
@class CoreImage_CIColorControls;
@class CoreImage_CIColorMatrix;
@class CoreImage_CIColorMonochrome;
@class CoreImage_CICompositingFilter;
@class CoreImage_CIConstantColorGenerator;
@class CoreImage_CIMultiplyCompositing;
@protocol NSMenuValidation;
@class __monomac_internal_ActionDispatcher;
@class NSURLSessionDataDelegate;
@class Foundation_InternalNSNotificationHandler;
@class __MonoMac_NSActionDispatcher;
@class __Xamarin_NSTimerActionDispatcher;
@class __MonoMac_NSAsyncActionDispatcher;
@class Eto_Mac_Forms_EtoDragSource;
@class Eto_Mac_Forms_MouseDelegate;
@class Eto_Mac_Forms_EtoWindow;
@class Eto_Mac_Forms_EtoContentView;
@class Eto_Mac_Forms_CustomFieldEditor;
@class Eto_Mac_Forms_SavePanelDelegate;
@class Eto_Mac_Forms_ColorHandler;
@class ObserverHelper;
@class Eto_Mac_Forms_FontDialogHelper;
@class Eto_Mac_Forms_ToolBar_ToolBarItemHandlerTarget;
@class Eto_Mac_Forms_Menu_ContextHandler;
@class EtoMenuActionHandler;
@class Eto_Mac_Forms_Controls_EtoCenteredButton;
@class Eto_Mac_Forms_Controls_EtoScrollView;
@class Eto_Mac_Forms_Controls_EtoFormatter;
@class Eto_Mac_Forms_Controls_EtoTextField;
@class Eto_Mac_Forms_Controls_EtoTextAreaDelegate;
@class Eto_Mac_Forms_Controls_EtoTextView;
@class Eto_Mac_Forms_Controls_CustomTextFieldEditor;
@class Eto_Mac_Forms_Controls_MacEventView;
@class Eto_Mac_Forms_Controls_MacImageData;
@class Eto_Mac_Forms_Controls_EtoLabelFieldCell;
@class Eto_Mac_Forms_Controls_MacImageListItemCell;
@class Eto_Mac_Forms_Controls_EtoGridScrollView;
@class Eto_Mac_Forms_Controls_EtoTableHeaderView;
@class Eto_Mac_Forms_Controls_EtoLabel;
@class Eto_Mac_Forms_Cells_EtoCellTextField;
@class EtoAppDelegate;
@class Eto_Mac_Threading_ThreadHandler_Delegate;
@class Eto_Mac_Forms_DialogHandler_EtoDialogWindow;
@class Eto_Mac_Forms_PixelLayoutHandler_FlippedMacEventView;
@class Eto_Mac_Forms_MacModal;
@class Eto_Mac_Forms_Printing_PrintDialogHandler_SheetHelper;
@class PrintView;
@class Eto_Mac_Forms_Printing_PrintDocumentHandler_SheetHelper;
@class Eto_Mac_Forms_Controls_SearchBoxHandler_EtoTextField;
@class Eto_Mac_Forms_Controls_PasswordBoxHandler_EtoSecureTextField;
@class Eto_Mac_Forms_Controls_ProgressBarHandler_EtoSlider;
@class Eto_Mac_Forms_Controls_TreeViewHandler_EtoTreeItem;
@class Eto_Mac_Forms_Controls_TreeViewHandler_EtoOutlineDelegate;
@class Eto_Mac_Forms_Controls_TreeViewHandler_EtoDataSource;
@class Eto_Mac_Forms_Controls_TreeViewHandler_EtoOutlineView;
@class Eto_Mac_Forms_Controls_ButtonHandler_EtoButton;
@class Eto_Mac_Forms_Controls_CheckBoxHandler_EtoCheckBoxButton;
@class Eto_Mac_Forms_Controls_DropDownHandler_MenuDelegate;
@class Eto_Mac_Forms_Controls_DropDownHandler_EtoPopUpButton;
@class Eto_Mac_Forms_Controls_ComboBoxHandler_EtoComboBox;
@class Eto_Mac_Forms_Controls_ComboBoxHandler_EtoCell;
@class Eto_Mac_Forms_Controls_GroupBoxHandler_EtoBox;
@class Eto_Mac_Forms_Controls_ImageViewHandler_EtoImageView;
@class Eto_Mac_Forms_Controls_ListBoxHandler_EtoDataSource;
@class Eto_Mac_Forms_Controls_ListBoxHandler_EtoDelegate;
@class Eto_Mac_Forms_Controls_ListBoxHandler_EtoListBoxTableView;
@class Eto_Mac_Forms_Controls_NumericStepperHandler_EtoTextField;
@class Eto_Mac_Forms_Controls_NumericStepperHandler_EtoNumericStepperView;
@class Eto_Mac_Forms_Controls_NumericStepperHandler_EtoStepper;
@class Eto_Mac_Forms_Controls_NumericStepperHandler_EtoNumberFormatter;
@class Eto_Mac_Forms_Controls_ScrollableHandler_EtoScrollView;
@class Eto_Mac_Forms_Controls_ScrollableHandler_EtoDocumentView;
@class Eto_Mac_Forms_Controls_SplitterHandler_EtoSplitViewDelegate;
@class Eto_Mac_Forms_Controls_SplitterHandler_EtoSplitView;
@class Eto_Mac_Forms_Controls_TabControlHandler_EtoTabView;
@class Eto_Mac_Forms_Controls_TabPageHandler_EtoTabViewItem;
@class Eto_Mac_Forms_Controls_PanelHandler_EtoPanel;
@class Eto_Mac_Forms_Controls_DrawableHandler_EtoDrawableView;
@class Eto_Mac_Forms_Controls_WebViewHandler_EtoWebView;
@class Eto_Mac_Forms_Controls_WebViewHandler_NewWindowHandler;
@class Eto_Mac_Forms_Controls_WebViewHandler_EtoWebUIDelegate;
@class Eto_Mac_Forms_Controls_DateTimePickerHandler_EtoDatePicker;
@class Eto_Mac_Forms_Controls_TreeGridViewHandler_EtoTreeItem;
@class Eto_Mac_Forms_Controls_TreeGridViewHandler_EtoDataSource;
@class Eto_Mac_Forms_Controls_TreeGridViewHandler_EtoOutlineView;
@class Eto_Mac_Forms_Controls_SliderHandler_EtoSlider;
@class Eto_Mac_Forms_Controls_GridViewHandler_EtoTableView;
@class Eto_Mac_Forms_Controls_RadioButtonHandler_EtoRadioButton;
@class Eto_Mac_Forms_Controls_SpinnerHandler_EtoProgressIndicator;
@class Eto_Mac_Forms_Controls_ColorPickerHandler_EtoColorWell;
@class Eto_Mac_Forms_Controls_CalendarHandler_EtoDatePicker;
@class Eto_Mac_Forms_Controls_LinkButtonHandler_EtoLinkLabel;
@class Eto_Mac_Forms_Controls_StepperHandler_EtoStepper;
@class Eto_Mac_Forms_Cells_DrawableCellHandler_EtoCellValue;
@class Eto_Mac_Forms_Cells_DrawableCellHandler_EtoCell;
@class Eto_Mac_Forms_Cells_DrawableCellHandler_EtoCellView;
@class Eto_Mac_Forms_Cells_ComboBoxCellHandler_EtoCell;
@class Eto_Mac_Forms_Cells_ComboBoxCellHandler_EtoPopUpButton;
@class Eto_Mac_Forms_Cells_ComboBoxCellHandler_CellView;
@class Eto_Mac_Forms_Cells_CheckBoxCellHandler_EtoButton;
@class Eto_Mac_Forms_Cells_CheckBoxCellHandler_CellView;
@class Eto_Mac_Forms_Cells_TextBoxCellHandler_CellView;
@class Eto_Mac_Forms_Cells_ImageViewCellHandler_EtoCell;
@class Eto_Mac_Forms_Cells_ImageViewCellHandler_EtoImageView;
@class Eto_Mac_Forms_Cells_ImageTextCellHandler_CellView;
@class Eto_Mac_Forms_Cells_ProgressCellHandler_EtoCell;
@class Eto_Mac_Forms_Cells_CustomCellHandler_EtoCustomCellView;
@class Eto_Mac_Drawing_IconFrameHandler_LazyImageRep;
@class Eto_Mac_Forms_ToolBar_ToolBarHandler_TBDelegate;
@class Eto_Mac_Forms_Controls_ButtonHandler_EtoButtonCell;
@class Eto_Mac_Forms_Controls_DropDownHandler_EtoPopUpButtonCell;
@class Eto_Mac_Forms_Controls_TreeGridViewHandler_EtoOutlineDelegate;
@class Eto_Mac_Forms_Controls_GridViewHandler_EtoTableViewDataSource;
@class Eto_Mac_Forms_Controls_GridViewHandler_EtoTableDelegate;
@class WebKit_WebView__WebFrameLoadDelegate;
@class WebKit_WebView__WebResourceLoadDelegate;
@class WebKit_WebView__WebUIDelegate;
@class WebKit_WebView__WebPolicyDelegate;
@class AppKit_NSApplication__NSApplicationDelegate;
@class __NSGestureRecognizerToken;
@class __NSClickGestureRecognizer;
@class AppKit_NSTextField__NSTextFieldDelegate;
@class AppKit_NSComboBox__NSComboBoxDelegate;
@class AppKit_NSDatePicker__NSDatePickerCellDelegate;
@class __NSGestureRecognizerParameterlessToken;
@class __NSGestureRecognizerParametrizedToken;
@class __NSMagnificationGestureRecognizer;
@class __NSPanGestureRecognizer;
@class __NSPressGestureRecognizer;
@class __NSRotationGestureRecognizer;
@class AppKit_NSSavePanel__NSOpenSavePanelDelegate;
@class AppKit_NSSearchField__NSSearchFieldDelegate;
@class AppKit_NSTableView__NSTableViewDelegate;
@class AppKit_NSTabView__NSTabViewDelegate;
@class AppKit_NSText__NSTextDelegate;
@class AppKit_NSTextView__NSTextViewDelegate;
@class AppKit_NSToolbar__NSToolbarDelegate;
@class AppKit_NSWindow__NSWindowDelegate;
@class Foundation_NSUrlSessionHandler_WrappedNSInputStream;
@class __NSObject_Disposer;
@class Foundation_NSUserNotificationCenter__NSUserNotificationCenterDelegate;
@class Foundation_NSUrlSessionHandler_NSUrlSessionHandlerDelegate;
@class OpenTK_Platform_MacOS_MonoMacGameView;

@interface NSDraggingSource : NSObject<NSDraggingSource> {
}
	-(id) init;
@end

@interface NSOpenSavePanelDelegate : NSObject<NSOpenSavePanelDelegate> {
}
	-(id) init;
@end

@interface NSWindowDelegate : NSObject<NSWindowDelegate> {
}
	-(id) init;
@end

@interface NSMenuDelegate : NSObject<NSMenuDelegate> {
}
	-(id) init;
@end

@interface NSTextViewDelegate : NSObject<NSTextViewDelegate, NSTextDelegate> {
}
	-(id) init;
@end

@interface NSApplicationDelegate : NSObject<NSApplicationDelegate> {
}
	-(id) init;
@end

@interface NSOutlineViewDelegate : NSObject<NSOutlineViewDelegate> {
}
	-(id) init;
@end

@interface NSOutlineViewDataSource : NSObject<NSOutlineViewDataSource> {
}
	-(id) init;
@end

@interface NSTableViewDataSource : NSObject<NSTableViewDataSource> {
}
	-(id) init;
@end

@interface NSTableViewDelegate : NSObject<NSTableViewDelegate> {
}
	-(id) init;
@end

@interface NSSplitViewDelegate : NSObject<NSSplitViewDelegate> {
}
	-(id) init;
@end

@interface WebUIDelegate : NSObject<WebUIDelegate> {
}
	-(id) init;
@end

@interface NSToolbarDelegate : NSObject<NSToolbarDelegate> {
}
	-(id) init;
@end

@interface CoreImage_CIColorControls : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface CoreImage_CIColorMatrix : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface CoreImage_CIColorMonochrome : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface CoreImage_CICompositingFilter : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
@end

@interface CoreImage_CIConstantColorGenerator : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface CoreImage_CIMultiplyCompositing : CoreImage_CICompositingFilter {
}
	-(id) init;
@end

@protocol NSMenuValidation
	@required -(BOOL) validateMenuItem:(NSMenuItem *)p0;
@end

@interface NSURLSessionDataDelegate : NSObject<NSURLSessionDataDelegate, NSURLSessionTaskDelegate, NSURLSessionDelegate> {
}
	-(id) init;
@end

@interface Eto_Mac_Forms_EtoWindow : NSWindow {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) canBecomeKeyWindow;
	-(void) center;
	-(void) zoom:(NSObject *)p0;
	-(void) recalculateKeyViewLoop;
	-(BOOL) conformsToProtocol:(void *)p0;
@end

@interface Eto_Mac_Forms_CustomFieldEditor : NSTextView {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(void) keyDown:(NSEvent *)p0;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface ObserverHelper : NSObject {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(void) performAction:(NSNotification *)p0;
	-(void) observeValueForKeyPath:(NSString *)p0 ofObject:(NSObject *)p1 change:(NSDictionary *)p2 context:(void *)p3;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface EtoMenuActionHandler : NSObject {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(void) activate:(NSObject *)p0;
	-(BOOL) validateMenuItem:(NSMenuItem *)p0;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface Eto_Mac_Forms_Controls_EtoCenteredButton : NSButtonCell {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(CGRect) drawingRectForBounds:(CGRect)p0;
	-(CGRect) titleRectForBounds:(CGRect)p0;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) copyWithZone: (NSZone *)zone;
@end

@interface Eto_Mac_Forms_Controls_EtoScrollView : NSScrollView {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(NSUInteger) borderType;
	-(void) setBorderType:(NSUInteger)p0;
	-(void) setFrameSize:(CGSize)p0;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface Eto_Mac_Forms_Controls_EtoFormatter : NSFormatter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(NSString *) stringForObjectValue:(NSObject *)p0;
	-(BOOL) getObjectValue:(NSObject **)p0 forString:(NSString *)p1 errorDescription:(void **)p2;
	-(BOOL) isPartialStringValid:(NSString **)p0 proposedSelectedRange:(void *)p1 originalString:(NSString *)p2 originalSelectedRange:(NSRange)p3 errorDescription:(void **)p4;
	-(NSAttributedString *) attributedStringForObjectValue:(void *)p0 withDefaultAttributes:(NSDictionary *)p1;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface Eto_Mac_Forms_Controls_EtoTextField : NSTextField {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(void) textViewDidChangeSelection:(NSNotification *)p0;
	-(void) mouseDown:(NSEvent *)p0;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface Eto_Mac_Forms_Controls_EtoTextAreaDelegate : NSObject<NSTextViewDelegate, NSTextDelegate> {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(void) textDidChange:(NSNotification *)p0;
	-(void) textViewDidChangeSelection:(NSNotification *)p0;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface Eto_Mac_Forms_Controls_EtoTextView : NSTextView {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(void) changeColor:(NSObject *)p0;
	-(BOOL) conformsToProtocol:(void *)p0;
@end

@interface Eto_Mac_Forms_Controls_CustomTextFieldEditor : Eto_Mac_Forms_CustomFieldEditor {
}
	-(id) init;
@end

@interface Eto_Mac_Forms_Controls_MacEventView : NSView {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(void) resetCursorRects;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface Eto_Mac_Forms_Controls_MacImageData : NSObject {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(NSString *) description;
	-(NSObject *) copyWithZone:(void *)p0;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface Eto_Mac_Forms_Controls_EtoLabelFieldCell : NSTextFieldCell {
}
	@property (nonatomic, assign) int verticalAlignment;
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(int) verticalAlignment;
	-(void) setVerticalAlignment:(int)p0;
	-(CGRect) drawingRectForBounds:(CGRect)p0;
	-(void) drawWithFrame:(CGRect)p0 inView:(NSView *)p1;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) copyWithZone: (NSZone *)zone;
	-(id) init;
@end

@interface Eto_Mac_Forms_Controls_MacImageListItemCell : Eto_Mac_Forms_Controls_EtoLabelFieldCell {
}
	-(CGSize) cellSizeForBounds:(CGRect)p0;
	-(void) drawInteriorWithFrame:(CGRect)p0 inView:(NSView *)p1;
	-(id) copyWithZone: (NSZone *)zone;
	-(id) init;
@end

@interface Eto_Mac_Forms_Controls_EtoLabel : NSTextField {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface Eto_Mac_Forms_Cells_EtoCellTextField : Eto_Mac_Forms_Controls_EtoTextField {
}
	-(BOOL) becomeFirstResponder;
	-(void) textDidEndEditing:(NSNotification *)p0;
	-(BOOL) resignFirstResponder;
	-(id) init;
@end

@interface EtoAppDelegate : NSObject<NSApplicationDelegate> {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) applicationShouldHandleReopen:(NSApplication *)p0 hasVisibleWindows:(BOOL)p1;
	-(void) applicationDidBecomeActive:(NSNotification *)p0;
	-(void) applicationDidFinishLaunching:(NSNotification *)p0;
	-(NSUInteger) applicationShouldTerminate:(NSApplication *)p0;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface Eto_Mac_Forms_PixelLayoutHandler_FlippedMacEventView : Eto_Mac_Forms_Controls_MacEventView {
}
	-(BOOL) isFlipped;
	-(id) init;
@end

@interface PrintView : NSView {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(NSString *) printJobTitle;
	-(CGRect) rectForPage:(NSInteger)p0;
	-(void) drawRect:(CGRect)p0;
	-(BOOL) knowsPageRange:(NSRange*)p0;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface Eto_Mac_Forms_Controls_PasswordBoxHandler_EtoSecureTextField : NSSecureTextField {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface Eto_Mac_Forms_Controls_ProgressBarHandler_EtoSlider : NSProgressIndicator {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface Eto_Mac_Forms_Controls_TreeViewHandler_EtoTreeItem : Eto_Mac_Forms_Controls_MacImageData {
}
	-(id) init;
@end

@interface Eto_Mac_Forms_Controls_TreeViewHandler_EtoOutlineDelegate : NSObject<NSOutlineViewDelegate> {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) outlineView:(NSOutlineView *)p0 shouldEditTableColumn:(NSTableColumn *)p1 item:(NSObject *)p2;
	-(void) outlineView:(NSOutlineView *)p0 willDisplayCell:(NSObject *)p1 forTableColumn:(NSTableColumn *)p2 item:(NSObject *)p3;
	-(void) outlineViewSelectionDidChange:(NSNotification *)p0;
	-(void) outlineViewItemDidCollapse:(NSNotification *)p0;
	-(BOOL) outlineView:(NSOutlineView *)p0 shouldExpandItem:(NSObject *)p1;
	-(BOOL) outlineView:(NSOutlineView *)p0 shouldCollapseItem:(NSObject *)p1;
	-(void) outlineViewItemDidExpand:(NSNotification *)p0;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface Eto_Mac_Forms_Controls_TreeViewHandler_EtoDataSource : NSObject<NSOutlineViewDataSource> {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(NSObject *) outlineView:(NSOutlineView *)p0 objectValueForTableColumn:(NSTableColumn *)p1 byItem:(NSObject *)p2;
	-(BOOL) outlineView:(NSOutlineView *)p0 isItemExpandable:(NSObject *)p1;
	-(NSObject *) outlineView:(NSOutlineView *)p0 child:(NSInteger)p1 ofItem:(NSObject *)p2;
	-(NSInteger) outlineView:(NSOutlineView *)p0 numberOfChildrenOfItem:(NSObject *)p1;
	-(void) outlineView:(NSOutlineView *)p0 setObjectValue:(NSObject *)p1 forTableColumn:(NSTableColumn *)p2 byItem:(NSObject *)p3;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface Eto_Mac_Forms_Controls_TreeViewHandler_EtoOutlineView : NSOutlineView {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(void) drawBackgroundInClipRect:(CGRect)p0;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface Eto_Mac_Forms_Controls_ButtonHandler_EtoButton : NSButton {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(void) sizeToFit;
	-(void) setFrameSize:(CGSize)p0;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface Eto_Mac_Forms_Controls_CheckBoxHandler_EtoCheckBoxButton : NSButton {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface Eto_Mac_Forms_Controls_DropDownHandler_EtoPopUpButton : NSPopUpButton {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface Eto_Mac_Forms_Controls_ComboBoxHandler_EtoComboBox : NSComboBox {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	+(Class) cellClass;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface Eto_Mac_Forms_Controls_ComboBoxHandler_EtoCell : NSComboBoxCell {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(void) tableView:(NSTableView *)p0 willDisplayCell:(NSCell *)p1 forTableColumn:(NSTableColumn *)p2 row:(NSInteger)p3;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) copyWithZone: (NSZone *)zone;
	-(id) init;
@end

@interface Eto_Mac_Forms_Controls_GroupBoxHandler_EtoBox : NSBox {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface Eto_Mac_Forms_Controls_ImageViewHandler_EtoImageView : NSImageView {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface Eto_Mac_Forms_Controls_ListBoxHandler_EtoDataSource : NSObject<NSTableViewDataSource> {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(NSObject *) tableView:(NSTableView *)p0 objectValueForTableColumn:(NSTableColumn *)p1 row:(NSInteger)p2;
	-(NSInteger) numberOfRowsInTableView:(NSTableView *)p0;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface Eto_Mac_Forms_Controls_ListBoxHandler_EtoDelegate : NSObject<NSTableViewDelegate> {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) tableView:(NSTableView *)p0 shouldSelectRow:(NSInteger)p1;
	-(void) tableViewSelectionDidChange:(NSNotification *)p0;
	-(CGFloat) tableView:(NSTableView *)p0 heightOfRow:(NSInteger)p1;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface Eto_Mac_Forms_Controls_ListBoxHandler_EtoListBoxTableView : NSTableView {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(NSMenu *) menuForEvent:(NSEvent *)p0;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface Eto_Mac_Forms_Controls_NumericStepperHandler_EtoTextField : NSTextField {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface Eto_Mac_Forms_Controls_NumericStepperHandler_EtoNumericStepperView : NSView {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(void) setFrameSize:(CGSize)p0;
	-(BOOL) conformsToProtocol:(void *)p0;
@end

@interface Eto_Mac_Forms_Controls_NumericStepperHandler_EtoStepper : NSStepper {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) acceptsFirstResponder;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface Eto_Mac_Forms_Controls_NumericStepperHandler_EtoNumberFormatter : NSNumberFormatter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) getObjectValue:(void *)p0 forString:(void *)p1 errorDescription:(void *)p2;
	-(NSString *) stringForObjectValue:(NSObject *)p0;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface Eto_Mac_Forms_Controls_ScrollableHandler_EtoScrollView : NSScrollView {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(void) resetCursorRects;
	-(BOOL) conformsToProtocol:(void *)p0;
@end

@interface Eto_Mac_Forms_Controls_ScrollableHandler_EtoDocumentView : NSView {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(void) setFrameSize:(CGSize)p0;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface Eto_Mac_Forms_Controls_SplitterHandler_EtoSplitViewDelegate : NSObject<NSSplitViewDelegate> {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(void) splitView:(NSSplitView *)p0 resizeSubviewsWithOldSize:(CGSize)p1;
	-(CGFloat) splitView:(NSSplitView *)p0 constrainSplitPosition:(CGFloat)p1 ofSubviewAt:(NSInteger)p2;
	-(void) splitViewDidResizeSubviews:(NSNotification *)p0;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface Eto_Mac_Forms_Controls_SplitterHandler_EtoSplitView : NSSplitView {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(void) mouseDown:(NSEvent *)p0;
	-(void) mouseDragged:(NSEvent *)p0;
	-(void) mouseUp:(NSEvent *)p0;
	-(BOOL) conformsToProtocol:(void *)p0;
@end

@interface Eto_Mac_Forms_Controls_TabControlHandler_EtoTabView : NSTabView {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface Eto_Mac_Forms_Controls_TabPageHandler_EtoTabViewItem : NSTabViewItem {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(void) drawLabel:(BOOL)p0 inRect:(CGRect)p1;
	-(CGSize) sizeOfLabel:(BOOL)p0;
	-(BOOL) conformsToProtocol:(void *)p0;
@end

@interface Eto_Mac_Forms_Controls_DrawableHandler_EtoDrawableView : Eto_Mac_Forms_Controls_MacEventView {
}
	-(void) drawRect:(CGRect)p0;
	-(BOOL) acceptsFirstResponder;
	-(BOOL) acceptsFirstMouse:(NSEvent *)p0;
	-(id) init;
@end

@interface Eto_Mac_Forms_Controls_WebViewHandler_EtoWebView : WebView {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
@end

@interface Eto_Mac_Forms_Controls_WebViewHandler_NewWindowHandler : NSObject {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(void) webView:(WebView *)p0 decidePolicyForNavigationAction:(NSDictionary *)p1 request:(NSURLRequest *)p2 frame:(WebFrame *)p3 decisionListener:(NSObject *)p4;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface Eto_Mac_Forms_Controls_WebViewHandler_EtoWebUIDelegate : NSObject<WebUIDelegate> {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(void) webView:(WebView *)p0 runJavaScriptAlertPanelWithMessage:(NSString *)p1 initiatedByFrame:(WebFrame *)p2;
	-(BOOL) webView:(WebView *)p0 runJavaScriptConfirmPanelWithMessage:(NSString *)p1 initiatedByFrame:(WebFrame *)p2;
	-(NSString *) webView:(WebView *)p0 runJavaScriptTextInputPanelWithPrompt:(NSString *)p1 defaultText:(NSString *)p2 initiatedByFrame:(WebFrame *)p3;
	-(NSArray *) webView:(WebView *)p0 contextMenuItemsForElement:(NSDictionary *)p1 defaultMenuItems:(NSArray *)p2;
	-(void) webView:(WebView *)p0 runOpenPanelForFileButtonWithResultListener:(id)p1;
	-(void) webView:(WebView *)p0 printFrameView:(WebFrameView *)p1;
	-(WebView *) webView:(WebView *)p0 createWebViewWithRequest:(NSURLRequest *)p1;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface Eto_Mac_Forms_Controls_DateTimePickerHandler_EtoDatePicker : NSDatePicker {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(void) drawRect:(CGRect)p0;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface Eto_Mac_Forms_Controls_TreeGridViewHandler_EtoTreeItem : NSObject {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface Eto_Mac_Forms_Controls_TreeGridViewHandler_EtoDataSource : NSObject<NSOutlineViewDataSource> {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(NSObject *) outlineView:(NSOutlineView *)p0 objectValueForTableColumn:(NSTableColumn *)p1 byItem:(NSObject *)p2;
	-(void) outlineView:(NSOutlineView *)p0 setObjectValue:(NSObject *)p1 forTableColumn:(NSTableColumn *)p2 byItem:(NSObject *)p3;
	-(BOOL) outlineView:(NSOutlineView *)p0 isItemExpandable:(NSObject *)p1;
	-(NSObject *) outlineView:(NSOutlineView *)p0 child:(NSInteger)p1 ofItem:(NSObject *)p2;
	-(NSInteger) outlineView:(NSOutlineView *)p0 numberOfChildrenOfItem:(NSObject *)p1;
	-(NSUInteger) outlineView:(NSOutlineView *)p0 validateDrop:(id<NSDraggingInfo>)p1 proposedItem:(NSObject *)p2 proposedChildIndex:(NSInteger)p3;
	-(BOOL) outlineView:(NSOutlineView *)p0 acceptDrop:(id<NSDraggingInfo>)p1 item:(NSObject *)p2 childIndex:(NSInteger)p3;
	-(BOOL) outlineView:(NSOutlineView *)p0 writeItems:(NSArray *)p1 toPasteboard:(NSPasteboard *)p2;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface Eto_Mac_Forms_Controls_TreeGridViewHandler_EtoOutlineView : NSOutlineView {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(NSUInteger) draggingSession:(NSDraggingSession *)p0 sourceOperationMaskForDraggingContext:(void *)p1;
	-(void) mouseDown:(NSEvent *)p0;
	-(BOOL) conformsToProtocol:(void *)p0;
@end

@interface Eto_Mac_Forms_Controls_SliderHandler_EtoSlider : NSSlider {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(NSInteger) isVertical;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface Eto_Mac_Forms_Controls_GridViewHandler_EtoTableView : NSTableView {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(void) drawBackgroundInClipRect:(CGRect)p0;
	-(void) rightMouseDown:(NSEvent *)p0;
	-(void) otherMouseDown:(NSEvent *)p0;
	-(void) mouseDown:(NSEvent *)p0;
	-(NSUInteger) draggingSession:(NSDraggingSession *)p0 sourceOperationMaskForDraggingContext:(void *)p1;
	-(BOOL) conformsToProtocol:(void *)p0;
@end

@interface Eto_Mac_Forms_Controls_RadioButtonHandler_EtoRadioButton : NSButton {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface Eto_Mac_Forms_Controls_SpinnerHandler_EtoProgressIndicator : NSProgressIndicator {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface Eto_Mac_Forms_Controls_ColorPickerHandler_EtoColorWell : NSColorWell {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(void) activate:(BOOL)p0;
	-(void) deactivate;
	-(NSColor *) color;
	-(void) setColor:(NSColor *)p0;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface Eto_Mac_Forms_Controls_CalendarHandler_EtoDatePicker : NSDatePicker {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface Eto_Mac_Forms_Controls_LinkButtonHandler_EtoLinkLabel : Eto_Mac_Forms_Controls_EtoLabel {
}
	-(BOOL) acceptsFirstResponder;
	-(void) drawRect:(CGRect)p0;
	-(id) init;
@end

@interface Eto_Mac_Forms_Controls_StepperHandler_EtoStepper : NSStepper {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface Eto_Mac_Forms_Cells_DrawableCellHandler_EtoCellValue : NSObject {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(NSObject *) copyWithZone:(void *)p0;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface Eto_Mac_Forms_Cells_DrawableCellHandler_EtoCell : NSCell {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(CGSize) cellSizeForBounds:(CGRect)p0;
	-(void) drawInteriorWithFrame:(CGRect)p0 inView:(NSView *)p1;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) copyWithZone: (NSZone *)zone;
	-(id) init;
@end

@interface Eto_Mac_Forms_Cells_DrawableCellHandler_EtoCellView : NSControl {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(NSObject *) objectValue;
	-(void) setObjectValue:(NSObject *)p0;
	-(BOOL) acceptsFirstResponder;
	-(void) drawRect:(CGRect)p0;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface Eto_Mac_Forms_Cells_ComboBoxCellHandler_EtoCell : NSPopUpButtonCell {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(void) drawBorderAndBackgroundWithFrame:(CGRect)p0 inView:(NSView *)p1;
	-(CGRect) drawTitle:(NSAttributedString *)p0 withFrame:(CGRect)p1 inView:(NSView *)p2;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) copyWithZone: (NSZone *)zone;
	-(id) init;
@end

@interface Eto_Mac_Forms_Cells_ComboBoxCellHandler_EtoPopUpButton : NSPopUpButton {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(NSMenu *) menuForEvent:(NSEvent *)p0;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface Eto_Mac_Forms_Cells_CheckBoxCellHandler_EtoButton : NSButton {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(void) lockFocus;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface Eto_Mac_Forms_Cells_ImageViewCellHandler_EtoCell : NSImageCell {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(void) drawInteriorWithFrame:(CGRect)p0 inView:(NSView *)p1;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) copyWithZone: (NSZone *)zone;
	-(id) init;
@end

@interface Eto_Mac_Forms_Cells_ImageViewCellHandler_EtoImageView : NSImageView {
}
	@property (nonatomic, assign) NSColor * backgroundColor;
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(NSColor *) backgroundColor;
	-(void) setBackgroundColor:(NSColor *)p0;
	-(void) drawRect:(CGRect)p0;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface Eto_Mac_Forms_Cells_ProgressCellHandler_EtoCell : NSLevelIndicatorCell {
}
	@property (nonatomic, assign) NSColor * backgroundColor;
	@property (nonatomic, assign) BOOL drawsBackground;
	@property (nonatomic, assign) NSColor * textColor;
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(NSColor *) backgroundColor;
	-(void) setBackgroundColor:(NSColor *)p0;
	-(BOOL) drawsBackground;
	-(void) setDrawsBackground:(BOOL)p0;
	-(NSColor *) textColor;
	-(void) setTextColor:(NSColor *)p0;
	-(CGSize) cellSizeForBounds:(CGRect)p0;
	-(void) drawWithFrame:(CGRect)p0 inView:(NSView *)p1;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) copyWithZone: (NSZone *)zone;
	-(id) init;
@end

@interface Eto_Mac_Forms_Cells_CustomCellHandler_EtoCustomCellView : NSTableCellView {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(void) drawRect:(CGRect)p0;
	-(NSInteger) backgroundStyle;
	-(void) setBackgroundStyle:(NSInteger)p0;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface Eto_Mac_Drawing_IconFrameHandler_LazyImageRep : NSImageRep {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(id) CGImageForProposedRect:(CGRect*)p0 context:(NSGraphicsContext *)p1 hints:(NSDictionary *)p2;
	-(NSInteger) bitsPerSample;
	-(void) setBitsPerSample:(NSInteger)p0;
	-(NSString *) colorSpaceName;
	-(void) setColorSpaceName:(NSString *)p0;
	-(CGSize) size;
	-(void) setSize:(CGSize)p0;
	-(NSInteger) pixelsHigh;
	-(void) setPixelsHigh:(NSInteger)p0;
	-(NSInteger) pixelsWide;
	-(void) setPixelsWide:(NSInteger)p0;
	-(BOOL) draw;
	-(BOOL) drawAtPoint:(CGPoint)p0;
	-(BOOL) drawInRect:(CGRect)p0 fromRect:(CGRect)p1 operation:(NSUInteger)p2 fraction:(CGFloat)p3 respectFlipped:(BOOL)p4 hints:(NSDictionary *)p5;
	-(BOOL) drawInRect:(CGRect)p0;
	-(NSObject *) copyWithZone:(void *)p0;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface Eto_Mac_Forms_Controls_ButtonHandler_EtoButtonCell : NSButtonCell {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(void) drawBezelWithFrame:(CGRect)p0 inView:(NSView *)p1;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) copyWithZone: (NSZone *)zone;
	-(id) init;
@end

@interface Eto_Mac_Forms_Controls_DropDownHandler_EtoPopUpButtonCell : NSPopUpButtonCell {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(void) drawBezelWithFrame:(CGRect)p0 inView:(NSView *)p1;
	-(CGRect) drawTitle:(NSAttributedString *)p0 withFrame:(CGRect)p1 inView:(NSView *)p2;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) copyWithZone: (NSZone *)zone;
	-(id) init;
@end

@interface Eto_Mac_Forms_Controls_TreeGridViewHandler_EtoOutlineDelegate : NSObject<NSOutlineViewDelegate> {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) outlineView:(NSOutlineView *)p0 shouldEditTableColumn:(NSTableColumn *)p1 item:(NSObject *)p2;
	-(void) outlineViewSelectionIsChanging:(NSNotification *)p0;
	-(void) outlineViewSelectionDidChange:(NSNotification *)p0;
	-(void) outlineViewItemDidCollapse:(NSNotification *)p0;
	-(BOOL) outlineView:(NSOutlineView *)p0 shouldExpandItem:(NSObject *)p1;
	-(BOOL) outlineView:(NSOutlineView *)p0 shouldCollapseItem:(NSObject *)p1;
	-(void) outlineViewItemDidExpand:(NSNotification *)p0;
	-(void) outlineView:(NSOutlineView *)p0 didClickTableColumn:(NSTableColumn *)p1;
	-(NSView *) outlineView:(NSOutlineView *)p0 viewForTableColumn:(NSTableColumn *)p1 item:(NSObject *)p2;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface Eto_Mac_Forms_Controls_GridViewHandler_EtoTableViewDataSource : NSObject<NSTableViewDataSource> {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(NSInteger) numberOfRowsInTableView:(NSTableView *)p0;
	-(NSObject *) tableView:(NSTableView *)p0 objectValueForTableColumn:(NSTableColumn *)p1 row:(NSInteger)p2;
	-(void) tableView:(NSTableView *)p0 setObjectValue:(NSObject *)p1 forTableColumn:(NSTableColumn *)p2 row:(NSInteger)p3;
	-(NSUInteger) tableView:(NSTableView *)p0 validateDrop:(id<NSDraggingInfo>)p1 proposedRow:(NSInteger)p2 proposedDropOperation:(NSUInteger)p3;
	-(BOOL) tableView:(NSTableView *)p0 acceptDrop:(id<NSDraggingInfo>)p1 row:(NSInteger)p2 dropOperation:(NSUInteger)p3;
	-(BOOL) tableView:(NSTableView *)p0 writeRowsWithIndexes:(NSIndexSet *)p1 toPasteboard:(NSPasteboard *)p2;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface Eto_Mac_Forms_Controls_GridViewHandler_EtoTableDelegate : NSObject<NSTableViewDelegate> {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) tableView:(NSTableView *)p0 shouldEditTableColumn:(NSTableColumn *)p1 row:(NSInteger)p2;
	-(void) tableViewSelectionDidChange:(NSNotification *)p0;
	-(CGFloat) tableView:(NSTableView *)p0 sizeToFitWidthOfColumn:(NSInteger)p1;
	-(void) tableView:(NSTableView *)p0 didClickTableColumn:(NSTableColumn *)p1;
	-(void) tableViewColumnDidResize:(NSNotification *)p0;
	-(NSView *) tableView:(NSTableView *)p0 viewForTableColumn:(NSTableColumn *)p1 row:(NSInteger)p2;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface __NSGestureRecognizerToken : NSObject {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
@end

@interface __NSGestureRecognizerParameterlessToken : __NSGestureRecognizerToken {
}
	-(void) target;
@end

@interface __NSGestureRecognizerParametrizedToken : __NSGestureRecognizerToken {
}
	-(void) target:(NSGestureRecognizer *)p0;
@end

@interface OpenTK_Platform_MacOS_MonoMacGameView : NSView {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(void) drawRect:(CGRect)p0;
	-(void) lockFocus;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) initWithFrame:(CGRect)p0;
	-(id) initWithCoder:(NSCoder *)p0;
@end


