include<stdio.h>
int main (){


import os
from reportlab.lib.pagesizes import letter
from reportlab.lib import colors
from reportlab.platypus import SimpleDocTemplate, Paragraph, Spacer, PageBreak
from reportlab.lib.styles import getSampleStyleSheet, ParagraphStyle
from reportlab.pdfgen import canvas

class NumberedCanvas(canvas.Canvas):
    def _init_(self, *args, **kwargs):
        super(NumberedCanvas, self)._init_(*args, **kwargs)
        self._saved_page_states = []
    def showPage(self):
        self.saved_page_states.append(dict(self.dict_))
        self._startPage()
    def save(self):
        num_pages = len(self._saved_page_states)
        for state in self._saved_page_states:
            self._dict_.update(state)
            self.draw_page_number(num_pages)
            canvas.Canvas.showPage(self)
        canvas.Canvas.save(self)
    def draw_page_number(self, page_count):
        self.saveState()
        self.setFont("Helvetica", 9)
        self.setFillColor(colors.HexColor("#4A5568"))
        if self._pageNumber > 1:
            self.drawString(54, 750, "Presentation Blueprint: Smart Disaster Management")
            self.setStrokeColor(colors.HexColor("#CBD5E0"))
            self.setLineWidth(0.5)
            self.line(54, 742, letter[0]-54, 742)
            self.drawRightString(letter[0] - 54, 40, f"Page {self._pageNumber} of {page_count}")
            self.drawString(54, 40, "Confidential - Academic & Professional Reference")
            self.line(54, 52, letter[0]-54, 52)
        self.restoreState()

def create_blueprint():
    os.makedirs('generated', exist_ok=True)
    pdf_path = "generated/disaster_management_presentation_blueprint.pdf"
    doc = SimpleDocTemplate(pdf_path, pagesize=letter, leftMargin=54, rightMargin=54, topMargin=72, bottomMargin=72, title="Disaster Management Presentation Blueprint")
    styles = getSampleStyleSheet()
    
    title_style = ParagraphStyle('CoverTitle', fontName='Helvetica-Bold', fontSize=28, leading=34, textColor=colors.HexColor("#1A365D"), alignment=1, spaceAfter=15)
    subtitle_style = ParagraphStyle('CoverSubtitle', fontName='Helvetica', fontSize=14, leading=18, textColor=colors.HexColor("#2B6CB0"), alignment=1, spaceAfter=40)
    h1_style = ParagraphStyle('SlideHeader', fontName='Helvetica-Bold', fontSize=20, leading=24, textColor=colors.HexColor("#1A365D"), spaceBefore=10, spaceAfter=15, keepWithNext=True)
    h2_style = ParagraphStyle('SlideSubHeader', fontName='Helvetica-Bold', fontSize=12, leading=16, textColor=colors.HexColor("#2D3748"), spaceBefore=8, spaceAfter=6, keepWithNext=True)
    body_style = ParagraphStyle('SlideBody', fontName='Helvetica', fontSize=10.5, leading=15, textColor=colors.HexColor("#2D3748"), spaceAfter=10)
    bullet_style = ParagraphStyle('SlideBullet', fontName='Helvetica', fontSize=10.5, leading=15, textColor=colors.HexColor("#2D3748"), leftIndent=20, firstLineIndent=-10, spaceAfter=6)
    
    story = [Spacer(1, 150), Paragraph("Smart Disaster Management:<br/>Leveraging Technology for Community Resilience", title_style), Paragraph("A Comprehensive 10-Page Structural Blueprint &amp; Slide Content Plan", subtitle_style), Spacer(1, 100)]
    meta_text = "<b>Prepared For:</b> Academic Delivery<br/><b>Format:</b> 10-Slide High-Impact Structure<br/><b>Date:</b> September 2026"
    story.extend([Paragraph(meta_text, body_style), PageBreak()])
    
   int   Slides array matching the layout from the prior step
    slides = [{
        "title": "Slide 2: Executive Summary &amp; The Problem Statement",
        "desc": "Establishes the macroeconomic and human cost of modern disasters, setting up the thesis that proactive, tech-driven mitigation saves exponentially more lives than purely reactive response.",
        "visuals": "Split-screen layout. Left: Graphic representing the rising frequency/cost of climate hazards over the last 30 years. Right: Bold statistic callout box reading '1:6 ROI - Every $1 invested in resilience saves $6 in recovery costs.'",
        "bullets": ["<b>The Escalating Threat Landscape:</b> Statistical overview of severe climate, geological, and industrial risks globally.", "<b>The Cost of Inaction:</b> Traditional systems focus heavily on post-event recovery, straining long-term municipal and national budgets.", "<b>Core Thesis Statement:</b> Shifting from reactive logistics to real-time, predictive, and tech-driven infrastructure framework."]
    }]  Note: Extend array with slides 3-10 definitions as structurally summarized prior
    
    for slide in slides:
        story.extend([Paragraph(slide["title"], h1_style), Spacer(1, 10), Paragraph("<b>Slide Objective &amp; Core Concept:</b>", h2_style), Paragraph(slide["desc"], body_style), Paragraph("<b>Visual Layout &amp; Asset Recommendations:</b>", h2_style), Paragraph(slide["visuals"], body_style), Paragraph("<b>Key Slide Talking Points:</b>", h2_style)])
        for bullet in slide["bullets"]: story.append(Paragraph(f"• {bullet}", bullet_style))
        story.append(PageBreak())
        
    doc.build(story, canvasmaker=NumberedCanvas)

if _name_ == "_main_":
    create_blueprint()

    return 0;
