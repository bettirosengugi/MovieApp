//
//  PreviewViewController.h
//  MovieFinal
//
//  Created by ilabafrica on 02/08/2016.
//  Copyright © 2016 Strathmore. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Film.h"
#import "PreviewFilm.h"

@interface PreviewViewController : UIViewController

@property (weak, nonatomic) IBOutlet UIImageView *imgPoster;
@property (weak, nonatomic) IBOutlet UILabel *lblTitle;
@property (weak, nonatomic) IBOutlet UILabel *lblDescription;

@property(nonatomic,retain) Film *film;
@property(nonatomic,retain) PreviewFilm *filmPreview;

-(void)fetchData:(NSString *)urlParameter;
-(void) designUI:(PreviewFilm *) preview;

@end
